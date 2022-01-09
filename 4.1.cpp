#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(){

    string path = "file.txt";
    ofstream f1;

    f1.open(path);

    int n, s;

    for (size_t i = 0; i < 10; i++)
    {
        cin >> n;
        s += n;
    }
    f1 << "Sum: " << s;
    

    f1.close();
    return 0;
}


