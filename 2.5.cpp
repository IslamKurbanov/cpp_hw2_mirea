#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    const double eps = 1.0e-10;
    double xmin = -4.0, xmax = 4.0 + eps, h = 0.5;
 
    cout << "x\ty" << endl;
    for (double x = xmin; x <= xmax; x += h)
    {
        if (x-1 == 0.0) //(fabs(x) < eps)
        {
            cout << x << "\tNot defined!" << endl;
        }
        else
        {
            double y = (x * x - 2 * x + 2) / (x - 1);
            cout << x << "\t" << y << endl;
        }
    }
 
    return 0;
}