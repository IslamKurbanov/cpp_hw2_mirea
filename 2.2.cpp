#include <iomanip>
#include <iostream>
#include <cmath>
using namespace std;

int main(){

    double a, x, w;
    cout << "x = "; 
    cin >> x;
    cout << "a = "; 
    cin >> a;
 
    double absx = fabs(x);
    if (absx < 1.0 && x != 0.0)
        w = a * log(absx);
    else if (absx >= 1.0 && a - x * x >= 0.0)
        w = sqrt(a - x * x);
    else
    {
       cout << "Not defined !";
     
    }

    if(w == -0){
        w = 0;
    }
    cout << "w = " << w;

    return 0;
}