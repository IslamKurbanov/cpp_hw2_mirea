#include <iostream>

using namespace std;

int main()
{
	int M;
	cin >> M;  // ���� M
	switch (M) // �������� �� �
	{
	case 1: // ���� � == 1, ���
	case 2: // ��� M ==2 2;
	case 5: // ��� N == 5
		cout << 0 << endl << 0; // �� ������� ���
		break;
	default: // � ��������� ������ ������� 
		cout << (M - 4 * (M % 3)) / 3 << endl << M % 3; // ������ ��������������� �������, ���� ������� �� � �� ������ 3m
	}
}