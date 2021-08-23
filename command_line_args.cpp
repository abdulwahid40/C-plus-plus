# include <iostream>
# include <conio.h>
# include <stdlib.h>
# include <string.h>

using namespace std;

// command line parameters in my case are "1 display"

int main(int argc, char **argv){
	
	int disp, count;
	int count2 = 2;
	if (argc < 2){
		cout << "Enter the length of the count\n";
		cout << "on the command line\n" << "Try again\n"; 
		return 1;
	}
	
	if (argc==3 && !strcmp(*(argv+2), "display")){
		disp = 1;
	}
	else{
		disp = 0;
	}
	
	for(count = atoi(*(argv+1)); count; --count){ // loop will terminate at count == 0
		if(disp){
			cout << count << " ";
		}
	}

	cout << "\a"; // causes the computer to beep

	getche();
	return 0;
}









