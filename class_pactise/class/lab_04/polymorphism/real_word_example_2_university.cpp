#include<iostream>
using namespace std;
class Recipient{
    public:
    virtual void notify(string message)=0;
    virtual ~Recipient(){}
};
class Student:public Recipient{
    public:
    void notify(string message)override{
        cout<<"[Student Notification]"<<message<<endl;
    }

};
class Teacher:public Recipient{
    public:
    void notify(string message)override{
        cout<<"[Teacher Nptification]"<<message<<endl;

    }
};
class Admin:public Recipient{
    public:
    void notify(string message)override{
        cout<<"[Admin Notification]"<<message<<endl;
    }
};
void sendNotification(Recipient* r,string msg)
{
    r->notify(msg);
}

int main()
{
    Student s;
    Teacher t;
    Admin a;
    sendNotification(&s,"Your exam schedule has been publish.");
    sendNotification(&t,"Please submit grades by Friday.");
    sendNotification(&a,"System maintenance schedule for sunday.");
    return 0;
}