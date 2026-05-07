#include<iostream>
using namespace std;
class Car{
   int year;
   double mileage
    
    public:
    string brand;
    string model;
    void set_Car(int year,double mileage,string brand,string model );
    int get_car()

};

int main()
{
Car car;
set_car(2012 ,55, "BMW", "SKYS");
get_car()
return 0;


}
void car::set_car(int year,double mileleage,string brand,string model)
{
    this->year=year;
    this->mileage=mileage;
    this->brand=brand;
    this->model=model;
    
}
void car :: get_car