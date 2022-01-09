#include <iostream>
#include <string>

using namespace std;

int main(){

     for (int i = 0; i < 13; i++) {
        if (i == 0 || i > 6) 
            for (int j = 0; j < 49; j++) 
                cout << ("_");

        else
             for (int j = 0; j < 49; j++) {
                if (j < 8)
                    cout << "*";
                else 
                    cout << "_";
            }   
        cout << "\n";
    }

    return 0;
}