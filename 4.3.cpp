#include <iostream>
#include <string>
#include <cmath>
#include <math.h>

using namespace std;

void rectangle(int a, int b){
    int s;

    s = a * b;

    cout << "Square of rectangle: " << s;
}

void circle(int r){
    int s;
    
    s = 3.14 * pow(r, 2);

    cout << "Square of circle: " << s;
}

void triangle(int a, int h){
    int s;

    s = (0.5 * a * h);
    // s = sqrt(p * (p - a) * (p - b) * (p - c));
    cout << "Square of triangle: " << s << endl;
}

int main(){
    circle(5);
    return 0;
}