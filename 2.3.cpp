#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;


int main(){
    
   double x, y, z, b;
   cout << "Enter b: ";
   cin >> b;
   cout << "Enter x: ";
   cin >> x;
   cout << "Enter y: ";
   cin >> y;

    if((y < b) && (x <= b)){
        z = log(b - y) * sqrt(b - x);
        cout << "z = " << z;
    }
    else{
        cout << "Not defined";
    }

    return 0;
}