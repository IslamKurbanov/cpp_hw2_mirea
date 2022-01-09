#include <iostream>


using namespace std;


int main()
{
	setlocale(0, "");

	float A[3][4], B[4][2], C[10], D[10];

	cout << "кол-во товаров: " << endl;
	for (int i = 0; i <= 2; i++)
	{
		cin >> A[i][0] >> A[i][1] >> A[i][2] >> A[i][3];
	}
	cout << "цена/комиссионные: " << endl;
	for (int i = 0; i <= 3; i++)
	{
		cin >> B[i][0] >> B[i][1];
	}
	
	float a, b;
	a = 0; b = 5000;

	for (int i = 0; i <= 2; i++)
	{
		C[i] = 0;
		D[i] = 0;
		for (int j = 0; j <= 3; j++)
		{
			C[i] += A[i][j] * B[j][0];
			D[i] += A[i][j] * B[j][1];
		}
	}

	for (int i = 0; i <= 2; i++)
	{
		if (C[i] > a)
		{
			a = i;
		}
		if (C[i] < b)
		{
			b = i;
		}
	}
	cout << "Наибольшая выручка у продавца № " << a << endl;
	cout << "Наименьшая выручка у продавца № " << b << endl;

	for (int i = 0; i <= 2; i++)
	{
		if (D[i] > a)
		{
			a = i;
		}
		if (D[i] < b)
		{
			b = i;
		}		
	}
	cout << "Наибольшие комиссионные у продавца № " << a << endl;
	cout << "Наименьшие комиссионные у продавца № " << b << endl;

	a = 0; b = 0;
	for (int i = 0; i <= 2; i++)
	{
		a += C[i];
		b += D[i];		
	}
	cout << "общая сумма денег, вырученных за проданные товары: " << a << endl;
	cout << "всего комиссионных получили продавцы: " << b << endl;
	cout << "общая сумма денег, прошедших через руки продавцов: " << a + b << endl;

	return 0;
}

