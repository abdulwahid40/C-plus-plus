# include <iostream>
# include <conio.h>
# include <ctype.h>
# include <stdlib.h>

using namespace std;

void convertToUppercase(char *);

int main(){
	
	char s[30] = "Welcome to Pakistan";
	
	cout << "The string before conversion is : " << s << endl;
	convertToUppercase(s);
	cout << "The string after conversion is : " << s << endl;	
	
	getche();
	return 0;
}

void convertToUppercase(char *sPtr){
	while(*sPtr != '\0'){
		if (islower(*sPtr)){
			*sPtr = toupper(*sPtr);
		}
		++sPtr;
	}
}








