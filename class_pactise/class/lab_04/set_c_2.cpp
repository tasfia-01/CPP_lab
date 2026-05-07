#include<iostream>
using namespace std;

class Vehicle
{
protected:
    string brand;
    int speed;

public:
    Vehicle(string brand, int speed)
    {
        this->brand = brand;
        this->speed = speed;
    }
};

class Car : public Vehicle
{
    int numberOfDoors;

public:
    Car(string brand, int speed, int doors)
    : Vehicle(brand, speed)
    {
        numberOfDoors = doors;
    }

    void describe()
    {
        cout << "Car Brand: " << brand << endl;
        cout << "Speed: " << speed << endl;
        cout << "Number of Doors: " << numberOfDoors << endl;
    }
};

class Bike : public Vehicle
{
    bool hasCarrier;

public:
    Bike(string brand, int speed, bool carrier)
    : Vehicle(brand, speed)
    {
        hasCarrier = carrier;
    }

    void describe()
    {
        cout << "Bike Brand: " << brand << endl;
        cout << "Speed: " << speed << endl;
        cout << "Has Carrier: " <<hasCarrier << endl;
    }
};

int main()
{
    Car c("Toyota", 180, 4);
    Bike b("Yamaha", 120, true);

    cout << "Car Details:" << endl;
    c.describe();

    cout << "\nBike Details:" << endl;
    b.describe();

    return 0;
}