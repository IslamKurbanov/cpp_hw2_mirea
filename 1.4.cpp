
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    
    float a, b, c, x;
    double x1, x2, d;
    cin >> a >> b >> c;
    d = pow(b, 2) - 4 * a * c;
    
    
    if(b == 0){
        cout << "Нет решений";
    }
    else if(a == 0){
        x = -c / b;
        cout << x;
    }
    else if(d < 0){
        cout << "нет корней";
    }
    else{
    x1 = (- b + sqrt(d)) / (2 * a);
    x2 = (- b - sqrt(d)) / (2 * a);
        
    cout << "x1 = " << x1 << "x2 = " << x2 << endl;
    }
     

    return 0;
}
