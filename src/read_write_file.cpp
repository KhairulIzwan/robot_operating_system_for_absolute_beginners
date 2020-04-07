#include <iostream> 
/* input/output functions, such as taking input from a keyboard or printing a 
message */

#include <fstream> 
/* ofstream: Stands for output file stream. It is used to create a file and to 
write data into it */
/* ifstream: Represents an input file stream. It is used to read data from 
files */ 
/* fstream: Has both read and write capabilities */

#include <string>

using namespace std; 
/* can access the functions or other entities included in the std namespace, 
such as functions like cout and cin. If we are not using this line of code, you 
have to mention std:: for accessing functions inside that namespace; for 
example, std::cout is a function to print a message */

int main()
{
	ofstream out_file;
	string data = "Robot_ID=0";

	cout << "Write data: " << data << endl;

	out_file.open("Config.txt");
	out_file << data << endl;
	out_file.close();

	ifstream in_file;
	in_file.open("Config.txt");
	in_file >> data;

	cout << "Read data: " << data << endl;

	in_file.close();

	// exits the program
	return 0;
}
