#include<iostream>
using namespace std;

class Rectangle{
    double length;
    double width;

public:
    Rectangle(){}
    Rectangle(double length,double width);
    //~Rectangle();
    void set_Rectangle(double length,double width);
    double calculateArea(); 
    double calculatePerimeter();

    };
int main()
{
    Rectangle rect(5,6);
    
    cout << rect.calculateArea() << endl;

    cout << rect.calculatePerimeter() << endl;

}
void Rectangle::set_Rectangle(double length,double width)
{
this->length=length;
this->width=width;
}
double Rectangle::calculateArea()
{
return this->length*this->width;
}
double Rectangle::calculatePerimeter()
{
return 2*(this->length+this->width);
}
Rectangle::Rectangle(double length,double width)
{
  this->length=length;
  this->width=width;  
}
