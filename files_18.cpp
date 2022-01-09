#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool sravnenie(string a, string b)
{
	int c = 0;
	while (tolower(a[c]) == tolower(b[c]))
		c++;
	if (tolower(a[c]) < tolower(b[c]))
		return 1;
	return 0;
}

int main()
{
	ofstream fout;
	ifstream fin;
	cout << "enter kolichestvo druzey: ";
	int n;
	cin >> n;
	string* family = new string[n];
	string* number = new string[n];
	fout.open("phone.txt");
	for (int i = 0; i < n; i++)
	{
		cout << "enter surname " << i + 1 << " friend: ";
		cin >> family[i];
		fout << family[i] << " ";
		cout << "enter number " << i + 1 << " friend: ";
		cin >> number[i];
		fout << number[i] << "\n";
	}
	fout.close();
	string find;
	bool FIND;
	do
	{
		FIND = 0;
		cout << "enter surname, or \"0\" for end: ";
		cin >> find;
		if (find != "0")
		{
			for (int i = 0; i < n; i++)
				if (family[i] == find)
				{
					cout << find << " number is " << number[i] << endl;
					FIND = 1;
				}
			if (!FIND)
				cout << "this surname not found.\n";
		}
	}
	while (find != "0");
	for (int i = 0; i < n; i++)
		for (int j = n - 1; j > i; j--)
			if (sravnenie(family[j], family[j - 1]))
			{
				swap(family[j], family[j - 1]);
				swap(number[j], number[j - 1]);
			}
	fout.open("sort_phone.txt");
	for (int i = 0; i < n; i++)
	{
		fout << family[i] << " ";
		fout << number[i] << "\n";
	}
	fout.close();
}