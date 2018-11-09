#include <iostream>
using namespace std;

double Area(int x){
	double area = 0;
	area = x*x*3.14;
	return area;	
}

double Circum(int x){
	double cir = 0;
	cir = 6.28*x;
	return cir;
}
int main(){
	int radius = 0;
	cout << "Enter the radius : ";
	cin >> radius;
	
	cout << "Area : " <<  Area(radius) << endl;
	cout << "Circumference : " << Circum(radius);
	return 0;
}
