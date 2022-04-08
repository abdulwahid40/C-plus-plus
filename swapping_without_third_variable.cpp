# include <iostream>
# include <conio.h>

using namespace std;

int main(){
	
	int a;
	int b;
	
	a = 1;
	b = 2;
	
	cout << "Num bers before swapping\n";
	cout << "a: " << a << endl; 
	cout << "b: " << b << endl;
	
	cout << "Numbers after swapping without using third variable\n";
	a = a ^ b;
	b = b ^ a;
	a = a ^ b;
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;

	
	getche();
	return 0;
}
