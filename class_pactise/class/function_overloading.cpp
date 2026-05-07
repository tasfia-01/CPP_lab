#include <iostream>
using namespace std;

class Math
{
public:
    int sum(int x, int y)
    {
        return x + y;
    }
    double sum(double x, int y)
    {
        return x + y;
    }
    double sum(int x, double y)
    {
        return x + y;
    }
    double sum(double x, double y)
    {
        return x + y;
    }
};

main()
{
    Math math;
    cout << math.sum(15, 5.54) << endl;
    return 0;
}