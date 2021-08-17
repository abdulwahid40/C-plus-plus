# include <iostream>
# include <conio.h>
# include <stdlib.h>

using namespace std;

const int nRows=3;
const int nCols = 3;

void readMatrix(int [][nCols]);
void displayMatrix(int [][nCols]);
void flippedMatrix(int [][nCols]);
void transposedMatrix(int [][nCols]);

int main(){

	
	
	int arr[nRows][nCols];
	
	readMatrix(arr);
	displayMatrix(arr);
	flippedMatrix(arr);
	transposedMatrix(arr);
	cout << "\nTranposed Matrix are\n";
	displayMatrix(arr);
	
	getche();
	return 0;
}

void readMatrix(int arr[][nCols]){
	for(int i=0; i<nRows; i++){
		for(int j=0; j<nCols; j++){
			cout << "Enter the elements of matrix [" << i << "," << j << "] : ";
			cin >> arr[i][j];
		}
	}
}

void displayMatrix(int arr[][nCols]){
	cout << endl;
	cout << "Elements of matrix are\n";
	for (int i=0; i<nRows; i++){
		for (int j=0; j<nCols; j++){
			cout << "\t" << arr[i][j] << " ";
		}
		cout << endl;
	}
}

void flippedMatrix(int arr[][nCols]){
	cout << endl;
	cout << "Flipped Matrix are\n";
	for (int i=nRows-1; i>=0; i--){
		for (int j=0; j<nCols; j++){
			cout << "\t" << arr[i][j] << " ";
		}
		cout << endl;
	}
}

void transposedMatrix(int arr[][nCols]){
	int temp;
	for (int i=0; i<nRows; i++){
		for (int j=i; j<nCols; j++){
			temp = arr[i][j];
			arr[i][j] = arr[j][i];
			arr[j][i] = temp;
		}
	}
}
