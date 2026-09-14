#include <iostream>
using namespace std;
int main()
{
    int x = 23456;
    int password, status;

    do
    {
        cout << "Enter 5 digit password : ";
        cin >> password;
        if (x == password)
        {
            cout << "\nAccess granted\n";
        }
        else
        {
            cout << "Access Dnied\n";
            cout << "  Try again !\n";
        }
    } while (password != x);
    cout << "\tLogin Successful\n";

    return 0;
}