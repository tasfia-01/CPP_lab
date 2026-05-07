#include <iostream>
using namespace std;

class Laptop
{
    string company;
    string model;
    string processor;
    int ram;
    int storage;
    string storage_type;
    double display_size;
    bool has_graphics;
    string gpu;
    bool has_rgb_keyboard;
    bool has_extra_memory_slot;

    // Access Specify
public:
    void set_company(string company);
    void get_company();
};

int main()
{
    Laptop laptop;
    laptop.set_company("HP");
    laptop.get_company();
    return 0;
}

void Laptop::set_company(string company) // :: scope resolution operator
{
    this->company = company;
}

void Laptop::get_company()
{
    cout << this->company << endl;
}