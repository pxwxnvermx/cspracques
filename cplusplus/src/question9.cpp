#include <iostream>
using namespace std;

int main()
{
    int space, rows ,i ,k;

    cout <<"Enter number of rows: ";
    cin >> rows;

    for(i = 1; i <= rows; ++i, k = 0)
    {
        for(space = 1; space <= rows-i; ++space)
        {
            cout <<"  ";
        }

        for(k = 0;k != 2*i-1;++k)
        {
            cout << "* ";
        }
        cout << endl;
    }    
    return 0;
}
