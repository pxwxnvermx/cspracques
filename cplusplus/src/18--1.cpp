#include <iostream>
using namespace std;
int fibo(int);
 
int main()
{
    int num;
    int result;
 
    cout<<"Enter the nth number in fibonacci series: ";
    cin>>num;
    if (num < 0)
    {
        cout<<"Fibonacci of negative number is not possible.\n";
    }
    else
    {
        result = fibo(num);
        cout<<"The  number "<<num <<" in fibonacci series is \n"<< result;
    }
    return 0;
}
int fibo(int num)
{
    if (num == 0)
    {
        return 0;
    }
    else if (num == 1)
    {
        return 1;
    }
    else
    {
        return(fibo(num - 1) + fibo(num - 2));
    }
}
