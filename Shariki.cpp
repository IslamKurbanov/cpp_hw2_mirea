#include <iostream> 
#include <locale.h> 
using namespace std;

int s = 0;                     

void perestanovka(int* m, int n, int n0) 
{
	bool ravenstvo = false;     
	if (n == 1)                 
	{
		for (int i = 0; i < n0; i++) 
		{
			if (m[i] == i + 1) 
			{
				ravenstvo = true;
			}
		}
		if (ravenstvo == true)      
		{
			s++;                      
		}
	}
	else                          
	{
		for (int k = 0; k < n; k++)  
		{
			swap(m[k], m[n - 1]);  
			perestanovka(m, n - 1,n0);  
			swap(m[n - 1], m[k]);    
		}
	}

}

int main()
{
	setlocale(0, " ");
	setlocale(0, "RUS");
	int n;
	cout << "enter N: ";
	cin >> n;             
	int* m = new int[n];    
	for (int i = 0; i < n; i++)
	{
		m[i] = i + 1;      
	}
	perestanovka(m, n, n); 
	cout << "Ответ: " << s;
	return 0;
}