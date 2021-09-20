/* This is a sample program to determine the length of a file. The program
accepts the name of the file as a command-line argument. */

# include <iostream>
# include <conio.h>
# include <fstream>
# include <stdlib.h>

using namespace std;

ifstream inFile;
ofstream outFile;

int main(int argc, char **argv){

/* Determine file length opening it for input */
	
	inFile.open(argv[1]);
	
	if(!inFile){
		cout << "Error: Unable to open file\n";
	}
	
	cout << "inFile tellg: " << inFile.tellg() << endl;
	
	inFile.seekg(0, ios::end);
	long inSize = inFile.tellg();
	cout << "The length of the file (inFile) is: " << inSize << endl;
	inFile.close();
	
/* Determine file length opening it for output and wrting in file */
	
	outFile.open(argv[1], ios::app);
	
	if(!outFile){
		cout << "Error: Unable to open file\n";
	}
	
	outFile.seekp(0, ios::end);
	long outSize = outFile.tellp();
	cout << "The length of the file (outFile) is: " << outSize;
	outFile << 1;
	cout << "Poistion of pointer in file: " << outFile.tellp();
	outFile.close();
		
	getche();
	return 0;
}





















