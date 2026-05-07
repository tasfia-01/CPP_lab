#include<iostream>
using namespace std;

class Student
{
    int id;
    string name;
    double marks[3];

    public:
    const string courses[3]={"oop","ds","db"};
    void set_student(int id,string name,double marks[]);
    void get_student();

};
int main()
{
  Student ob;
  double m[]={100,80,85};
  ob.set_student(1,"tasfia",m);
  ob.get_student();
  return 0;
}


void Student::set_student(int id,string name,double marks[])
{
  this->id=id;
  this->name=name;

  for(int i=0;i<3;i++){
  this->marks[i]=marks[i];
  }
}
void Student::get_student()
{
  cout<<this->id<<endl;
  cout<<this->name<<endl;

  for(int i=0;i<3;i++){
  cout<<this->marks[i]<< " ";
  }
 
}
