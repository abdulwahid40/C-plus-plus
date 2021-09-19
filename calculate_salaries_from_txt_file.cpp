/* 
A given input file contains Name of the employee and salary of current month. There is a
single space between the name and the salary. Name and salary can not contain spaces.
Calculate the total salaries of the employees. Create an output file and write the total
salary in that file.
*/

# include <iostream>
# include <conio.h>
# include <fstream>
# include <cstring>
# include <stdlib.h>

using namespace std;

int main(){
	
	ifstream inFile;
	char inputFileName[] = "salin.txt";
	ofstream outFile;
	char outputFileName[] = "salout.txt";
	const int MAX_CHAR_TO_READ = 100;
	char completeLineText[MAX_CHAR_TO_READ];
	char *tokenPtr;
	int salary, totalSalary;
	
	salary = 0;
	totalSalary = 0;
	
	inFile.open(inputFileName);
	outFile.open(outputFileName);
	
	if(!inFile){
		cout << "Can't open input file named: " << inputFileName << endl;
		exit(1);
	}
	
	if(!outFile){
		cout << "Can't open input file named: " << outputFileName << endl;
		exit(1);
	}
	
	while(!inFile.eof()){
		inFile.getline(completeLineText, MAX_CHAR_TO_READ);
		tokenPtr = strtok(completeLineText, " ");
		tokenPtr = strtok(NULL, " ");
		
		salary = atoi(tokenPtr);
		totalSalary += salary;
	}
	
	outFile << "The total Salary is: " << totalSalary;
	
	inFile.close();
	outFile.close();
	
	cout << "Total salary successfully written in salout.txt ";
		
	getche();
	return 0;
}









