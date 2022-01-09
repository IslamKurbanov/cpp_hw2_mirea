#include <iostream>
#include <fstream>

using namespace std;

int main() 
{
    string path = "myfile.txt";
	ifstream file(path);
	int b;
	do
	{
                      
		if(file >> b) 
		{
                                 
			cout << b << endl; // если считали число - выводим
		}
		else
		{
                                  // если считали не число, очищаем ошибки
			file.clear();
                                  
			file.ignore(1, ' '); // пропускаем символы до следующего пробела
		}
	}
	while(!file.eof());
	file.close();


	return 0;
}