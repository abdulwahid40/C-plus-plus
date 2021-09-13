# include <iostream>
# include <conio.h>
# include <fstream>

using namespace std;

int main(){
	
	ofstream outFile;
	
	char outputFileName[] = "myFileOut.txt";
	char outputText[] = "Welcome to Pakistan";
	
	outFile.open(outputFileName, ios::out);
	
	if(!outFile){
		cout << "Cannot open file named: " << outputFileName;
		exit(1);
	}
	
	outFile << outputText;
	outFile.close();
	
	
	getche();
	return 0;
}

















