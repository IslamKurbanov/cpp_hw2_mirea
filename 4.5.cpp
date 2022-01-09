#include <cmath>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    int size = 80, height = 21;
    vector<string> chart(height, string(size, ' '));
    chart[height/2] = string(size, '-');
    for(int i = 0; i < size; ++i) {
    chart[static_cast<int>(round(10 * sin(i / 4.5) + 10))][i] = 'x';
    }
    for(auto &&s : chart) {
    cout << s << '\n';
    }
};