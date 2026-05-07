#include<iostream>
using namespace std;

class Person
{
    protected:
    string name;
    int age;
    Person(string name,int age)
    {
        this->name=name;
        this->age=age;

    }
    void showDetails()
    {
        cout<<"Name :"<<name<<endl;
        cout<<"Age :"<<age<<endl;
    }
    
};
class Employee:public Person
{
private:
int employeeID;
double salary;
public:
Employee(string name,int age,int employeeID,double salary):Person(name,age)
{
    this->employeeID=employeeID;
    this->salary=salary;
}
    void showDetails()
    {
        cout<<"Name :"<<name<<endl;
        cout<<"Age :"<<age<<endl;
        cout<<"Employee ID :"<<employeeID<<endl;
        cout<<"Salary :"<<salary<<endl;

    }
    
};

int main()
{
    
    Employee e("Rahim",20,101,25000);
    e.showDetails();

    return 0;
}