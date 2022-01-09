#include <iostream>
#include <fstream>
#include <string>

int main()
{
	std::string filename;
	std::cout << "enter filename: ";
	getline(std::cin, filename);

	std::string fraze;
	std::cout << "enter substring: ";
	getline(std::cin, fraze);

	std::string buf;

	std::ifstream fin;

	int counter = 0;
	bool success = false;
	int i;

	fin.open(filename);
	while (!fin.eof())
	{
		counter++;
		getline(fin, buf);
		for (i = 0; i <= (buf.size() - fraze.size()) && !success; i++)
			for (int j = 0; j < fraze.size(); j++)
			{
				if (fraze[j] != buf[i + j])
					break;
				if (j == fraze.size() - 1)
				{
					success = 1;
				}
			}
		if (success)
			break;
	}
	fin.close();
	
	if (success)
		std::cout << "substring was found in " << filename << " in " << counter << " line on " << i << " position";
	else
		std::cout << "substring was not found in " << filename;
}
