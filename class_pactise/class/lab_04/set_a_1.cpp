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
    void display()
    {
      cout<<"Name :"<<name<<endl;
      cout<<"Roll :"<<rollNo<<endl;
      cout<<"CGPA :"<<cgpa<<endl;
    }

};
int main()
{
    Student s("tasfia","10001",3.5);
    s.display();
    return 0;
}