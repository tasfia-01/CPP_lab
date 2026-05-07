#include<iostream>
using namespace std;

class calculator
{
    public:
    int add(int x,int y)
    {
        return x+y;
    }
    double add(double x,double y)
    {
        return x+y;
    }
    int add(int x,int y,int z)
    {
        return x+y+z;
    }
};
int main()
{
    calculator c;
    
    cout<<c.add(5,10)<<endl;
    cout<<c.add(5.5,10.5)<<endl;
    cout<<c.add(5,10,15)<<endl;
    return 0;
}