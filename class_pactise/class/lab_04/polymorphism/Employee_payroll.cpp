#include <iostream>
using namespace std;

class Employee
{
public:
    virtual double calculateSalary() = 0;
    virtual double calculateBonus() = 0;
    virtual double calculateTax()=0;
    virtual double netSalary()=0;
    virtual ~Employee() {};
};

class FulltimeEmployee : public Employee
{
private:
    double salary;

public:
    FulltimeEmployee(double salary)
    {
        this->salary = salary;
    }
    double calculateSalary() override
    {
        return salary;
    }
    double calculateBonus() override
    {
        return (salary * 0.5);
    }

    double calculateTax() override
    {
        return salary+calculateBonus() * 0.1;
    }
    double netSalary() override
    {
        return (calculateSalary() + calculateBonus()) - calculateTax();
    }
};

class ParttimeEmployee : public Employee
{
private:
    double hours;
    double rate;

public:
    ParttimeEmployee(double hours, double rate)
    {
        this->hours = hours;
        this->rate = rate;
    }
    double calculateSalary() override
    {

        return hours * rate;
    }

    double calculateBonus() override
    {
        double bonus = (int)(hours / 20) * 1000;
        return bonus;
    }

    double calculateTax() override
    {
        return ((calculateSalary() + calculateBonus()) * 0.05);
    }

    double netSalary() override
    {
        return (calculateSalary() + calculateBonus()) - calculateTax();
    }
};

class ContractualEmployee : public Employee
{
private:
    double salary;
    int project_count;

public:
    ContractualEmployee(double salary, int project_count)
    {
        this->salary = salary;
        this->project_count = project_count;
    }
    double calculateSalary() override
    {
        return salary * project_count;
    }
    double calculateBonus() override
    {
        return (project_count / 5) * 0.25 * salary;
    }
    double calculateTax() override
    {
        return ((calculateSalary() + calculateBonus()) * 0.07);
    }
    double netSalary() override
    {
        return (calculateSalary() + calculateBonus()) - calculateTax();
    }
};

void display(Employee *e)
{
    cout << "total salary: " << e->calculateSalary() << endl;
    cout << "total bonus: " << e->calculateBonus() << endl;
    cout << "total tax: " << e->calculateTax() << endl;
    cout << "Net Salary: "<< e->netSalary() << endl;
     cout << "-----------------------------" << endl;
}

int main()
{
    FulltimeEmployee fe(50000.00);
    ParttimeEmployee pe(20, 150.00);
    ContractualEmployee ce(10000.00, 5);
   
    Employee *e;
    e = &fe;
    display(e);
    e = &pe;
    display(e);
    e = &ce;
    display(e);

    return 0;
}