#include<iostream>
using namespace std;
class Employee{
    public:
    virtual double calculateSalary()=0;
    virtual double calculateBonus()=0;
    virtual double calculateTax()=0;
    virtual double netSalary()=0;
    virtual ~Employee(){};
};
class FulltimeEmployee:public Employee{

    private:
    double salary;
    
    public:
    FulltimeEmployee(double s):salary(s){}
    
   double calculateSalary() override
    {
        return salary;
    }
    double calculateBonus() override
    {
        return salary*0.5;
    }
    double calculateTax() override
    {
        return 0.10*(calculateSalary()+calculateBonus());
    }
    double netSalary() override
    {
        return (calculateSalary()+calculateBonus())-calculateTax();
    }

};
class ParttimeEmployee:public Employee{
    private:
    double hours;
    double rate;
    
    public:
    ParttimeEmployee(double h,double r ):hours(h),rate(r){}
    
   double calculateSalary() override
    {
        return hours*rate;

    }
    double calculateBonus() override
    {
        return (int)(hours/20)*0.25*calculateSalary();
    }
    double calculateTax() override
    {
        return 0.05*(calculateSalary()+calculateBonus());
    }
    double netSalary() override
    {
        return (calculateSalary()+calculateBonus())-calculateTax();
    }
    
};
class ContractualEmployee:public Employee{
    private:
    double salary;
    int project_count;
    public:
    ContractualEmployee(double s,int p):salary(s),project_count(p){}
   
    double calculateSalary() override
    {
        return salary*project_count;

    }
    double calculateBonus() override
    {
        return (project_count/5)*0.25*calculateSalary();
    }
    double calculateTax() override
    {
        return 0.07*(calculateSalary()+calculateBonus());
    }
    double netSalary() override
    {
        return (calculateSalary()+calculateBonus())-calculateTax();
    }

};
void employeeInfo(Employee *e)
{
    cout<<"total salary:"<<e->calculateSalary()<<endl;
    cout<<"total bonus:"<<e->calculateBonus()<<endl;
    cout<<"total tax:"<<e->calculateTax()<<endl;
    cout<<"Net salary:"<<e->netSalary()<<endl;
}
int main()
{
    Employee *e;

    FulltimeEmployee f(50000);
    ParttimeEmployee p(20,2500);
    ContractualEmployee c(2000,5);

    e=&f;
    cout<<"Fulltime Employee"<<endl;
    employeeInfo(e);

    e=&p;
    cout<<"Parttime Employee"<<endl;
    employeeInfo(e);

    e=&c;
    cout<<"contractual Employee"<<endl;
    employeeInfo(e);



    return 0;
}