#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

int main(){
    
    int n,y;
    float p,m,s;
    cout << "Сумма кредита (руб.): " << endl; 
    cin >> s;
    cout << "Период (количество лет): " << endl; 
    cin >> n;
    cout << "Процент: " << endl; 
    cin >> p;
 
    p /= 100;
    m = (s * p * pow((1+p),n)) / 
          (12 * (pow(1+p,n) - 1));
    cout << "Ежемесячно: руб." << m << endl;

    return 0;
}