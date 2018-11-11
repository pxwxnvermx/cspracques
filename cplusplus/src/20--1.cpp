#include <iostream>

using namespace std;
 
int gcd(int, int);
 
int main()
{
    int a, b, result;
 
    cout<<"Enter the two numbers to find their GCD: ";
    cin>>a>>b;
    result = gcd(a, b);
    cout<<"The GCD of  " << a  << "  and  "  << b <<"  is  "<< result;
}
 
int gcd(int a, int b)
{
    while (a != b)
    {
        if (a > b)
        {
            return gcd(a - b, b);
        }
        else
        {
            return gcd(a, b - a);
        }
    }
    return a;
}

