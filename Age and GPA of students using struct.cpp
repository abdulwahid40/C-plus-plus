/* This program calculates the average age and average GPA of a class. Also determine
the grade of the class and the student with max GPA. We will use a student structure and
manipulate it to get the desired result. */

# include <iostream>
# include <conio.h>

using namespace std;

int main(){
	
	struct student{
		char name[30];
		char course[15];
		int age;
		float GPA;
	};
	
	const int noOfStudents = 3;
	student students[noOfStudents];
	int totalAge, index, averageAge;
	float totalGPA, maxGPA, averageGPA;
	
	for(int i=0; i<noOfStudents; i++){
		cout << endl;
		cout << "Enter data for Student " << i+1 << endl;
		cout << "Enter the Student's Name: ";
		cin >> students[i].name; 
		cout << "Enter the Student's Course: ";
		cin >> students[i].course;
		cout << "Enter the Student's Age: ";
		cin >> students[i].age;
		cout << "Enter the Student's GPA: ";
		cin >> students[i].GPA;   
	}

	
// Calculating the total age, total GPA and maximum GPA;

	maxGPA = 0;
	for (int j=0; j<noOfStudents; j++){
		totalAge += students[j].age;
		totalGPA += students[j].GPA;
		if(students[j].GPA > maxGPA){
			maxGPA = students[j].GPA;
			index = j;
		}
	}
	
	averageAge = totalAge / noOfStudents;
	cout << "\nThe average age is: " << averageAge <<endl;
	
	averageGPA = totalGPA / noOfStudents;
	cout << "\nThe average GPA is: " << averageGPA <<endl;
	cout << "\nStudent with maximum GPA is: " << students[index].name <<endl;
	
// Determining the grade of the class

	if(averageGPA > 4){
		cout << "\nWrong grades have been enetered " << endl;
	}
	else if(averageGPA == 4){
		cout << "\nThe average grade of the class is: A " << endl;
	}	
	else if(averageGPA >= 3){
		cout << "\nThe average grade of the class is: B " << endl;
	}	
	else if(averageGPA >= 2){
		cout << "\nThe average grade of the class is: C " << endl;
	}	
	else{
		cout << "\nThe average grade of the class is: F " << endl;
	}


	
	getche();
	return 0;
}
