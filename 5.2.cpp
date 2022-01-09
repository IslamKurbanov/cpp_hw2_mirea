#include <iostream>
#include <string>

using namespace std;

void eratosthen(int n){

    int *a = new int[n + 1];
    for (int i = 0; i <= n; i++)
        a[i] = i;
    for (int p = 2; p <= n; p++)
    {
        if (a[p] != 0)
    {
      cout << a[p] << endl;
      for (int j = p*p; j <= n; j += p)
        a[j] = 0;
        }
    }
}

int main(){

    eratosthen(10);

    return 0;
}