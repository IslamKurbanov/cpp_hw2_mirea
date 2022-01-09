#include <iostream>
#include <string>

using namespace std;

void func1(int x){

    if (x > 0)
    {
        cout << true;
    }
    else if(x == 0){
        cout << false;
    }
    else{
        cout << -1;
    }
    
}

int main(){

    func1(-5);

    return 0;
}