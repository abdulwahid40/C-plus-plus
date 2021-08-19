# include <iostream>
# include <conio.h>

using namespace std;

void swap(int *, int *);

int main(){
	
	int x[] = {1,3,5,7,9,2,4,6,8,10};
	
	for(int i=0; i<10; i++){
		int swaps = 0;
		for (int j=0; j<10; j++){
			if (x[j] > x[j+1]){
				swaps++;
				swap(&x[j], &x[j+1]);
			}
		}
		for (int j=0; j<10; j++){
			cout << x[j] <<"\t";
		}
			
		cout << endl;
		if (swaps == 0)
			break;
		
	}
	
	getche();
	return 0;
}

void swap(int *x, int *y){
	int temp;
	if (*x > *y){
		temp = *x;
		*x = *y;
		*y = temp;
	}
}
