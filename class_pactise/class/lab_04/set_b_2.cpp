#include<iostream>
using namespace std;

class shape
{
    public:
    double area(double radius)
    {
        double PI=3.1416;
        return PI*radius*radius;
    }
    double area(double length,double width)
    {
        return length*width;
    }
    double area(double base,double height,bool is_triangle)
    {
        return 0.5*base*height;
    }
};
int main()
{
     shape a;
    
    cout<<"circle area:"<<a.area(5)<<endl;
    cout<<"Ractangle area:"<<a.area(5.5,10.5)<<endl;
    cout<<"triangle area:"<<a.area(5,10,1)<<endl;
    return 0;
}