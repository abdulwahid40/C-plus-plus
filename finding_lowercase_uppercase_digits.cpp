//Analysis of text using ctype.h

# include <iostream>
# include <conio.h>
# include <ctype.h>

using namespace std;

int main(){
	
 	char c;
 	int i=0, lc=0, uc=0, dig=0, ws=0, punc=0, oth=0;
 	
 	cout << "Please enter a character string and then press ENTER: ";
 	
 	
 	while((c = getchar())!='\n'){
 		if (islower(c)){
 			lc++;
		 }
		 else if(isupper(c)){
		 	uc++;
		 }
		 else if(isdigit(c)){
		 	dig++;
		 }
		 else if(isspace(c)){
		 	ws++;
		 }
		 else if(ispunct(c)){
		 	punc++;
		 }
		 else{
		 	oth++;
		 }
	 }
	 
	cout << "You typed:"<< endl;
	cout<< "lower case letters = "<< lc<< endl;
	cout << "upper case letters = " << uc <<endl;
	cout<< "digits = " << dig << endl;
	cout<< "white space = "<< ws << endl;
	cout<< "punctuation = "<< punc<< endl;
	cout<< "others = "<< oth;
 
	getche();
	return 0;
}









