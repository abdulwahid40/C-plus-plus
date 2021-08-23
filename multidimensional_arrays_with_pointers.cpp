# include <iostream>
# include <conio.h>

using namespace std;



int main(){
	
	int multi[5][10];
	int *ptr;
	ptr = *multi;
	
	for(int i=0; i<5; i++){
		for (int j=0; j<10; j++){
			multi[i][j] = i * j;
		}
	}
	
	cout << "Array manipulated using indexing \n";

	for(int i=0; i<5; i++){
		for (int j=0; j<10; j++){
			cout << multi[i][j] << "\t";
		}
	cout << endl;
	}
	
	cout << "Array manipulated using pointers \n";

	for(int i=0; i<50; i++, ptr++){
		cout << *ptr << "\t";
	}	
	
	
	
	getche();
	return 0;
}









