// This program demonstrate the encryption by using ^ operator
# include <iostream>
# include <conio.h>

using namespace std;

int main(){
	
	char password[10];
	char *passPtr;
	
	cout << "Please enter a password (less than 10 character): ";
	cin >> password;
	passPtr = password;
	
	// now encrypting the password by using ^ with 3
	
	while(*passPtr != '\0'){
		*passPtr = (*passPtr ^ 3);
		++passPtr;
	}
	
	cout << "The encrypted password is: " <<  password << endl;
	
	// now decrypting the encrypting password by using ^ with 3
	
	passPtr = password; 
	
	while(*passPtr != '\0'){
		*passPtr = (*passPtr ^ 3);
		++passPtr;
	}
	
	cout << "The decrypted password is: " << password << endl;
	
	
	getche();
	return 0;
}
