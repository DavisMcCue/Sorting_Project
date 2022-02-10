#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include "number_data.h"
using namespace std;

void printComparisons(string comparisonsInput)
{
	ofstream sortFile("compsout.txt", std::fstream::app);
	//cout << "\n";
	//sortFile.clear();
	if (sortFile.is_open())
	{
		//cout << "Comparisons: " << comparisonsInput << endl;
	    sortFile << comparisonsInput << endl;
	}
	//sortFile << "\n";
	sortFile.clear();
	//sortFile.close();
}