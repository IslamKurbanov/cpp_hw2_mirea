#include <cstdlib>
#include <iostream>
 
using namespace std;
 
int main()
{
   cout << "N: ";
   int n;
   cin >> n;
   for (int i = 0; i < 11; i++)
   {
      cout << n + i << " ";
   }
   cout << "\n";

   return 0;
}