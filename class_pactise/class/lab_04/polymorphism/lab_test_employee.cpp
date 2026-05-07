#include<iostream>
using namespace std;
class Employee{
    public:
    virtual double calculateSalary()=0;
    virtual double calculateBonus()=0;
    virtual double calculateTax()=0;
    virtual double netSalary()=0;
};
class FulltimeEmployee:public Employee{

    private:
    double salary;
    double bonus;
    public:
    FulltimeEmployee(double s,double b):salary(s),bonus(b){}
    
   double calculateSalary() override
    {
        return salary;
    }
    double calculateBonus() override
    {
        return bonus;
    }
    double calculateTax() override
    {
        return 0.10*(salary+bonus);
    }
    double netSalary() override
    {
        return (salary+bonus)-calculateTax();
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
        return (hours/20)*0.25*calculateSalary();
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
    
}
int main()
{
    Employee *e;

    FulltimeEmployee f(3500,100);
    ParttimeEmployee p(3.00,2300);
    ContractualEmployee c(1000,3);

    e=&f;
    e->calculateSalary();

    e=&p;
    e->calculateSalary();

    e=&c;
    e->calculateSalary();



    return 0;
}