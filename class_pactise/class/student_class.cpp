#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    string id;
    int batch;
    int semester;
    string department;
    int age;

    Student()
    {
        cout << "Lilabali lilabali" << endl;
    }

    Student(string name, string id, int batch, int semester, string department, int age)
    {
        this->age = age;
        this->batch = batch;
        this->name = name;
        this->id = id;
        this->semester = semester;
        this->department = department;
    }

    void set_student()
    {
        cin >> this->name;
        cin >> this->id;
        cin >> this->batch;
        cin >> this->semester;
        cin >> this->department;
        cin >> this->age;
    }
};

int main()
{
    Student student[10];

    for (int i = 0; i < 2; i++)
    {
        student[i].set_student();
    }

    return 0;
}