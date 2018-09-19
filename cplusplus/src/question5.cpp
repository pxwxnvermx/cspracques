#include <iostream>
#include <string.h>
using namespace std;

void palCheck(char b[20]){
	int flag = 0;
		
	for(int i = 0;i<strlen(b)/2;i++){		
		if(b[i] != b[strlen(b)-i-1]){
			flag = 1;
			break;
		}		
	}
	
	if(flag)
		cout << "Not a palindrome";
	else
		cout << "Is a palindrome";
}

int main(){
	char a[20];
	cout << "Enter the word : ";
	cin >> a;
		
	palCheck(a);
	return 0;
}
