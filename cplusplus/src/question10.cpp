#include <iostream>
using namespace std;

void evenCheck(int a[]){
	cout << "Even elements : ";
	for(int i = 0;i<6;i++){
		if(a[i]%2==0){
			cout << a[i] << " \n";
		}
	}
	
}

void oddCheck(int a[]){
	cout << "Odd elements : ";
	for(int i = 0;i<6;i++){
		if(a[i]%2==1){
			cout << a[i] << " \n";
		}
	}
	
}

void sumAvg(int a[]){
	cout << "Sum of elements : ";
	int sum,avg;
	for(int i = 0;i<6;i++){
			sum += a[i];
		}
	cout << sum  << " \n";
	cout<<"Average of elements : ";
	avg = sum /6;
	cout << avg << " \n";
}

void maxMin(int a[]){
	int max,min;
	max = a[0];
	min = a[0];
	cout << "Max element : ";
	for(int i = 0;i<6;i++){
		if(max<a[i])
			max = a[i];
	}
	cout << max << endl;
	cout << "Min element : ";
	for(int i = 0;i<6;i++){
		if(min>a[i])
			min = a[i];
	}
	cout << min << endl;
	
}

void dupCheck(int a[]){
	int j = 0;
	int n = 6;
    for (int i=0; i < n; i++){
        for(int j=0;j<i;j++){

            if(a[i]==a[j]){
                n--;
                for (int k=i; k<n; k++){
                    a[k]=a[k+1];
                }
                i--;     // you forgot to decrement i
            }
        }
    }	
    for(int i = 0;i<n;i++){
			cout << a[i];
	}
	cout << endl;
}

void reverse(int a[]){
	cout << "Reverse of the array : ";
	for(int i = 5;i>=0;i--){
		cout << a[i] << " \n";
	}
}

int main(){
	int ch,exit=1;
	int a[6];
	while(exit!=0){
	cout << "Enter 6 elements of the array. ";
	for(int i = 0;i<6;i++){
		cin >> a[i];
	}
	cout << "The given array is : ";
	for(int i = 0;i<6;i++){
		cout << a[i] << endl;
	}
	
	cout << "Enter 0 to exit. \n";	
	cout << "Enter 1 for printing even valued elements.\n";
	cout << "Enter 2 for printing odd valued elements.\n";
	cout << "Enter 3 for printing sum and average of elements.\n";
	cout << "Enter 4 for printing max and min elements\n";
	cout << "Enter 5 for removing the duplicates.\n";
	cout << "Enter 6 for printing the array in reverse order.\n";
	
	cout << "Enter Your Choice :";
	cin >> ch;
	
		switch(ch){
			case 0:
				exit = 0;
				break;
			case 1:
				evenCheck(a);
				break;
			case 2:
				oddCheck(a);
				break;
			case 3:
				sumAvg(a);
				break;
			case 4:
				maxMin(a);
				break;
			case 5:
				dupCheck(a);
				break;
			case 6:	
				reverse(a);
				break;
			default:
				exit = 1;					
		}
	}
	return 0;
}
