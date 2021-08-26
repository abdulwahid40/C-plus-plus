# include <iostream>
# include <conio.h>

using namespace std;

int main(){
	
	int i;
	char c;
	
	for(i=0; i<256; i++){
		c = i;
		cout << i << "\t" << c << "\n";
	}
	
	getche();
	return 0;
}
