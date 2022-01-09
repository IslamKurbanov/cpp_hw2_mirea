#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){

    string s;
    int  i, a;
    a = 0;
    cin >> s;
    map <char, int> rim;
    rim['I'] = 1;
    rim['V'] = 5;
    rim['X'] = 10;
    rim['L'] = 50;
    rim['C'] = 100;
    rim['D'] = 500;
    rim['M'] = 1000;
    
    for ( i = 0; i < s.size(); i++)
    {
        if (rim[s[i]] >= rim[s[i+1]])
        {
            a += rim[s[i]];
        }
        else
        {
            a -= rim[s[i]];
        }
    }
    cout << a;

    return 0;
}