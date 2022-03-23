/* This program uses a union of int and char and display the memory usage by both */
# include <iostream>
# include <conio.h>

using namespace std;

int main(){
	
	// Declaration of union
	union intorChar{
		char c[4];
		int x;
	}ul;
	
	ul.x = 'a';
	// Displaying the charactet array and ineteger value
	cout << "The value of c = " << ul.c[0] << "," << ul.c[1] << "," << ul.c[2] << "," << ul.c[3] << endl;
	cout << "The value of x = " << ul.x << endl;
	
	// Shifting the values one byte and adding one to the int
	ul.x *= 256;
	ul.x += 'b';
	cout << "The value of c = " << ul.c[0] << "," << ul.c[1] << "," << ul.c[2] << "," << ul.c[3] << endl;
	cout << "The value of x = " << ul.x << endl;

	// Shifting the values one byte and adding one to the int
	ul.x *= 256;
	ul.x += 'c';
	cout << "The value of c = " << ul.c[0] << "," << ul.c[1] << "," << ul.c[2] << "," << ul.c[3] << endl;
	cout << "The value of x = " << ul.x << endl;

	// Shifting the values one byte and adding one to the int
	ul.x *= 256;
	ul.x += 'd';
	cout << "The value of c = " << ul.c[0] << "," << ul.c[1] << "," << ul.c[2] << "," << ul.c[3] << endl;
	cout << "The value of x = " << ul.x << endl;




	
	getche();
	return 0;
}
