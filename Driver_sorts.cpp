#include <iostream>
#include <cstdlib>
#include <fstream>
#include "number_data.h"
using namespace std;

void printSortedOutput(int data[], size_t n)
{
	ofstream sortFile("sortsout.txt", std::fstream::app);
	//8000
	if (sortFile.is_open())
	{
		//cout << "8000" << endl;
		//cout << "-----------------------" << endl;
		for (int i = 0; i < n; i++)
		{
			sortFile << data[i] << " ";
		}
		sortFile << "\n";
	}
	sortFile.close();
	//sortFile.clear();
	//sortFile << "\n";
	//cout << endl;
}