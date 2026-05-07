#include<iostream>
using namespace std;

class Teacher{
    string name;
    string dept;
    string subject;
    double salary;

    public:
    Teacher(string name,string dept,string subject,double salary)
    {
        this->name=name;
        this->dept=dept;
        this->subject=subject;
        this->salary=salary;
    }
    void incresesalary(double amount){
        this->salary=this->salary+amount;

}

    void display(){
       cout<<this->name<<endl;
       cout<<this->dept<<endl;
       cout<<this->subject<<endl;
       cout<<this->salary<<endl;
    }

};



int main()
{
    Teacher t1("Tasfia","cse","oop",25000);
    t1.display();
    t1.incresesalary(2000);
    t1.display();

}