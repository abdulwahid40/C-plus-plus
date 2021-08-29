# include <iostream>
# include <conio.h>
# include <string.h>
# include <stdlib.h>

using namespace std;

int main(){
	
	char s1[] = "Welcome to ";
	char s2[] = "Virtual University";
	char s3[] = "Welcome to Karachi";
	char city[] = "Karachi";
	char province[] = "Sindh";
	char s[80];
	char *pc;
	int n;
	
	cout << "s1: " << s1 << endl;
	cout << "s2: " << s2 << endl;
	cout << "s3: " << s3 << endl;
	
	cout << "The length of s1: " << strlen(s1) << endl;
	cout << "The length of s2: " << strlen(s2) << endl;
	cout << "The length of s3: " << strlen(s3) << endl;	
	
	strcpy(s, "Hyderabad");
	cout << "The nearest city to " << city << " is " << s << endl;
	
	strcat(s, " and ");
	strcat(s, city);
	strcat(s, " are in ");
	strcat(s, province);
	cout << s << endl;
	
	if(!strcmp(s1,s2)){
		cout << "\ns1 and s2 are identical\n";
	}
	else{
		cout << "s1 and s2 are not identical\n";
	}
	
	if(!strncmp(s1, s3, 7)){
		cout << "First 7 characters of s1 and s3 are identical\n";
	}
	else{
		cout << "First 7 characters of s1 and s3 are not identical\n";
	}

	getche();
	return 0;
}














