#include <iostream>
using namespace std;
int main()
{
    // find odd or even
    int x;
    cout << "Enter a number : ";
    cin >> x;
    if (x % 2 == 0)
    {
        cout << "Number is even" << endl;
    }
    else
    {
        cout << "Number is odd" << endl;
    }
}