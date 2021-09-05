# include <iostream>
# include <conio.h>
# include <fstream>

using namespace std;

int main(){
	
	char name[50];
	char sal[10];
	char dept[30];
	
	ifstream inFile;
	
	char inputFileName[] = "myfile.txt";
	
	inFile.open(inputFileName);
	
	if(!inFile){
		cout << "Cann't open the file named: " << inputFileName << endl;
		exit(1);
	}
	
	while(!inFile.eof()){
		inFile >> name >> sal >> dept;
		cout << name << "\t" << sal << "\t" << dept << endl;
	}
	
	inFile.close();
	
	getche();
	return 0;
}

















