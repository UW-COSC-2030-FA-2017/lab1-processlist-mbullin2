
#include "stdafx.h"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
	//fstream file;
	string fileName;
	int i;
	int length = 0;
	int numberOne = 0;
	int numberTwo = 0;
	int numberThree = 0;
	int numberFour = 0;
	int temp = 0;

	cout << "Please enter a filename ";
	getline(cin, fileName);
	//file.open(fileName);
	ifstream file(fileName);
	if (file.fail())
	{
		cerr << "Unable to open file" << endl;
		return 1;
	}
	while (file >> i)
	{
		length++;

		cout << i << " ";
		if (length == 1)
		{
			numberOne = i;
		}
		else if (length == 2)
		{
			numberTwo = i;
		}
		if (length > 1)
		{
			numberThree = numberFour;
		}
		numberFour = i;
	}
	
	cout << endl;
	file.close();
	cout << "The length of the file is " << length << endl;
	cout << "The first number is " << numberOne << endl;
	cout << "The second number is " << numberTwo << endl;
	cout << "The second to last number is " << numberThree << endl;
	cout << "The last number is " << numberFour << endl;

	system("pause");
	return 0;
}



