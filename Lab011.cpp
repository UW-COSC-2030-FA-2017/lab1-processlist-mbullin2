
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
	// Variables that store the file name, a temporary variable to read the file,
	// the length of the file and store the first two and last two numbers of a file.
	string fileName;
	float i;
	float length = 0;
	float numberOne = 0;
	float numberTwo = 0;
	float numberThree = 0;
	float numberFour = 0;
	// Prompt the user for a file name and then try and open the file
	cout << "This program counts the length of a file along with printing the first 2 and last 2 numbers," << endl;
	cout << "Please enter a file name ";
	getline(cin, fileName);
	ifstream file(fileName);
	// Check to see if the file opened, if not, print and error message and terminate the program
	if (file.fail())
	{
		cerr << "Unable to open file" << endl;
		return 1;
	}
	// Read from the file while keeping track of the length along with the first two and last two numbers
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
	// Close the file
	file.close();
	// Print the results of the program
	cout << endl << "The length of the file is " << length << endl;
	cout << "The first number is " << numberOne << endl;
	cout << "The second number is " << numberTwo << endl;
	cout << "The second to last number is " << numberThree << endl;
	cout << "The last number is " << numberFour << endl;

	system("pause");
	return 0;
}



