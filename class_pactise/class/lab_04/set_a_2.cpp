#include<iostream>
using namespace std;

class Student
{
    string name;
    string rollNo;
    double cgpa;
    public:
    Student(){};
    Student(string name,string rollNo,double cgpa)
    {
        this->name=name;
        this->rollNo=rollNo;
        this->cgpa=cgpa;
    }
    Student(Student &s)
    {
        name=s.name;
        rollNo=s.rollNo;
        cgpa=s.cgpa;

    }
    void setcgpa(double cgpa)
    {
        this->cgpa=cgpa;
    }
    void display()
    {
      cout<<"Name :"<<name<<endl;
      cout<<"Roll :"<<rollNo<<endl;
      cout<<"CGPA :"<<cgpa<<endl;
    }

};
int main()
{
    Student s1("tasfia","10001",3.5);
    Student s2=s1;
    s1.setcgpa(4.0);
    
    cout<<"s1 details :"<<endl;
    s1.display();

    cout<<"s2 details :"<<endl;
    s2.display();
    return 0;
}