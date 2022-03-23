/* this program reads from a file, populate the structure, and write the structure in a file */

# include <iostream>
# include <conio.h>
# include <fstream>
# include <stdlib.h>

using namespace std;

// Global vairables for input and output files
ifstream inFile;
ofstream outFile;

//student structure
struct student{
	char name[30];
	char course[15];
	int age;
	float GPA;
};

void openFile();
student getData();
void writeData(student);

int main(){
	
	const int noOfStudents = 3;
	openFile();
	student students[noOfStudents];
	
	for(int i=0; i<noOfStudents; i++){
		if(!inFile.eof()){
			students[i] = getData();
			cout << "Details of student " << i + 1 << "successfully readed\n";
		}
		else{
			break;
		}
	}
	
	for(int i=0; i<noOfStudents; i++){
		writeData(students[i]);
		cout << "Details of student " << i + 1 << "write successfully into another file\n";
	}
	
	inFile.close();
	outFile.close();
	
	getche();
	return 0;
}

void openFile(){
	inFile.open("SAMPLE.txt", ios::in);
	inFile.seekg(0L, ios::beg);
	outFile.open("SAMPLEOUT.txt", ios::out | ios::app);
	outFile.seekp(0L, ios::end);
	
	
	if(!inFile || !outFile){
		cout << "Error in opening the file" << endl;
		exit(1);
	}
	else{
		cout << "File Opened\n";
	}	
}

student getData(){
	student tempStudent;
	char tempAge[2];
	char tempGPA[5];
	
	// Reading a line from the file and assigning the vairables
	inFile.getline(tempStudent.name, '\n');
	inFile.getline(tempStudent.course, '\n');
	inFile.getline(tempAge, '\n');
	tempStudent.age = atoi(tempAge);
	inFile.getline(tempGPA, '\n');
	tempStudent.GPA = atof(tempGPA);
	
	// Returning the tempStudent structure
	return tempStudent;
}

void writeData(student writeStudent){
	outFile << writeStudent.name << endl;
	outFile << writeStudent.course << endl;
	outFile << writeStudent.age << endl;
	outFile << writeStudent.GPA << endl;
}






