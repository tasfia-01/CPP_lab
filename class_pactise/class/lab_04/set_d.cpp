#include<iostream>
using namespace std;

class Person
{
    protected:
    string name;
    int id;
    Person(string name,int id)
    {
        this->name=name;
        this->id=id;

    }
    
};
class Student:public Person
{
private:
double cgpa;
public:
Student(string name,int id,double cgpa):Person(name,id)
{
    this->cgpa=cgpa;
}
    void getstatus()
    {
        if(cgpa>=2.0)
        {
            cout<<"pass"<<endl;
        }
        else
        {
            cout<<"fail";
        }

    }
    void getstatus(double threshhold)
    {
        if(cgpa>=threshhold)
        {
            cout<<"thrshhold"<<endl;
        }
        else 
        {
            cout<<"not threshhold"<<endl;
        }
    }


};
class Teacher:public Person
{
    private:
    string subject;
    public:
    Teacher(string name,int id,string subject):Person(name,id)
    {
        this->subject=subject;
    }

};
int main()
{
    
    Student s1("tasfia",1001,3.50);
    Student s2("sanjida",1003,3.56);
    Student s3("israt",1007,3.59);
    Student s4("arko",1009,3.60);
    Student s5("joba",1002,3.65);
    s1.getstatus(3.4);
    s2.getstatus();
    s3.getstatus();
    s4.getstatus();
    s5.getstatus();

    
    return 0;
}