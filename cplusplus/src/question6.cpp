#include <iostream>
using namespace std;

void checkprime(int x){
	int count,i;
	if(x==0){
		cout << "no is prime";
	}else{
		for(i=2;i<=x/2;i++){
			if(x%i==0)
				count++;
		}
	}
	if(count<1)
		cout<<"Prime";
	else{
		cout <<"Not Prime";
	}	
}

int main(){
	int num;
	cout<<"Enter a no. ";
	cin>>num;
	checkprime(num);
	return 0;
}
