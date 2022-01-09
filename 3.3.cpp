#include <iostream>
#include <set>
#include <string>
#include <fstream>
using namespace std;
 
int main() {

    string path = "file.txt";
    char buff[4];
    ofstream f1;

    f1.open(path);
    cin >> buff;
    f1 << buff;
    f1.close();

    // ifstream fin;
    // fin.open(path);

    // if (!fin.is_open())
    // {
    //     cout << "Error";
    // }
    // else{
    //     cout << "Succesful" << endl;
    //     char ch;
    //     while(fin.get(ch)){
    //         cout << ch;
    //     }
    // }
    
    // fin.close();

    return 0;
}