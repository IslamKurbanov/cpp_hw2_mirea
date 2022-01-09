#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
using namespace std;


int main(){

    int n, a;
    float p,m,s;
    
    cout << "Сумма кредита (руб.): " << endl; 
    cin >> s;
    cout << "Месячная выплата: " << endl; 
    cin >> m;
    cout << "Срок выплаты: " << endl; 
    cin >> n;

    p = (pow(((12 * m) / s) - 1, n)) * pow(100, n);

    cout << "Процент: " << p << " %" << endl;

    return 0;
}
