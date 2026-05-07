#include<iostream>
using namespace std;
class Employee{
    protected:
    int id;
    string name;
    double salary;
    public:
    Employee(int id,string name,double salary)
    {
    this->id=id;
    this->name=name;
    this->salary=salary;

    }
    void get_Employee();
    
};
class Manager:public Employee{
    private:
    double bonus;
    public:
    Manager(int id,string name,double salary,double bonus):Employee(id,name,salary)
    {
    this->bonus=bonus;

    }
    void get_Manager();
    double calculateSalary()
    {
        return salary+bonus;
    }
};

class Engineer:public Employee{
    private:
    double overtime;
    double overtimeRate;
    public:
    Engineer(int id,string name,double salary,double overtime,double overtimeRate):Employee(id,name,salary)
    {
    this->overtime=overtime;
    this->overtimeRate=overtimeRate;
    }
    void get_Engineer();
    double calculateSalary()
    {
      return salary+(overtime*overtimeRate);
    }
};

int main()
{
    Manager m(1001,"tasfia",40000,5000);
    
    Engineer e(1002,"sanjida",35000,3.0,1500);
    
    cout<<"Manager total salary:"<<m.calculateSalary()<<endl;
     cout<<"Engineer total salary:"<<e.calculateSalary()<<endl;
    return 0;
}

