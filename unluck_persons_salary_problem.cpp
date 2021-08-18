# include <iostream>
# include <conio.h>

using namespace std;

void getInput(double sal[][2], int numEmps);
void calcNetSal(double sal[][2], int numEmps);
void findUnluckies(double sal[][2], int numEmps, int lucky[]);
void markIfUnlucky(double sal[][2], int numEmps, int lucky[], int upperBound, int empNbr);
void printUnluckies(int lucky[], int numEmps);
void displayMatrix(double sal[][2], int numEmps);

int main(){
	
	const int arraySize = 100;
	double sal[arraySize][2];
	int lucky[arraySize] = {0};
	int numEmps;
	
//	Read the actual number of employees in the company
	cout << "\nPlease enter the total number of employees in your company: ";
	cin >> numEmps;
	cout << "\n";
	
//	Read the gross salaries of employees into the array 'sal'
	getInput(sal, numEmps);
	
//	Calculate the net salary of employess and store them into array
	cout << "\n\n Calculate the net salaries...\n";
	calcNetSal(sal, numEmps);
	
//	Find the unlucky employees
	cout << "\n\nLocating the unlucky employees...";
	findUnluckies(sal, numEmps, lucky);
	
//	Print the unlucky employee numbers
	cout << "\n\nPrinting the unlucky employees...\n";
	printUnluckies(lucky, numEmps);
	
	
//	Display matrix
	cout << "\n\nDisplaying original salaries after deductions\n";
	displayMatrix(sal,numEmps);
	
	getche();
	return 0;
}


void getInput(double sal[][2], int numEmps){
	for(int i=0; i<numEmps; i++){
		cout << "\n Please enter the gross salary for employee number: " << i << " : ";
		cin >> sal[i][0];
	}	
}


void calcNetSal(double sal[][2], int numEmps){
	for (int i=0; i<numEmps; i++){
		if (sal[i][0] >= 0 && sal[i][0] <= 5000){
//			 There is no tax deduction
			 sal[i][1] = sal[i][0];
		}
		else if (sal[i][0] >= 5001 && sal[i][0] <= 10000){
			sal[i][1] = sal[i][0] - (0.05 * sal[i][0]);
		}
		else if (sal[i][0] >= 10001 && sal[i][0] <= 20000){
			sal[i][1] = sal[i][0] - (0.10 * sal[i][0]);
		}
		else if (sal[i][0] >= 20001){
			sal[i][1] = sal[i][0] - (0.15 * sal[i][0]);
		}
		else{
//			Do not do anything
		}
	}
}


void findUnluckies(double sal[][2], int numEmps, int lucky[]){
	for(int i=0; i<numEmps; i++){
		if (sal[i][0] >= 0 && sal[i][0] <= 5000){
//			Do nothing
		}			
		else if (sal[i][0] >= 5001 && sal[i][0] <= 10000){
			markIfUnlucky(sal, numEmps, lucky, 5001, i);
		}
		else if (sal[i][0] >= 10001 && sal[i][0] <= 20000){
			markIfUnlucky(sal, numEmps, lucky, 10001, i);
		}
		else if (sal[i][0] >= 20001){
			markIfUnlucky(sal, numEmps, lucky, 20001, i);
		}
	}
}

void markIfUnlucky(double sal[][2], int numEmps, int lucky[], int upperBound, int empNbr){
	for (int i=0; i<numEmps; i++){
		/*
		See the if the condition below, it will mark the employee
		unlucky even if an employee in the higher tax bracket is getting
		the same amount of net salary as that of a person in the lower
		tax bracket
		*/
		if (sal[i][0] < upperBound && sal[i][1] >= sal[empNbr][1]){
			lucky[empNbr] = 1;
			break;		
		}
	}
}

void printUnluckies(int lucky[], int numEmps){
	for(int i=0; i<numEmps; i++){
		if (lucky[i] == 1){
			cout << "\nEmployee No: " << i << endl;
		}
	}
	cout << endl;
}

void displayMatrix(double sal[][2], int numEmps){
	for(int i=0; i<numEmps; i++){
		for (int j=0; j<2; j++){
			cout << "\t" << sal[i][j];
		}
		cout << "\n";
	}
}





