#include <iostream>
#include <string>

using namespace std;

int euclidean_al(int a, int b) {
	if (b == 0)
		return a;
	else
		return  (a % b);
}


int main(){

    cout << euclidean_al(16,32) << endl;
    cout << euclidean_al(234,668) << endl;
    cout << euclidean_al(545,983) << endl;
    cout << euclidean_al(125,10) << endl;

    return 0;
}