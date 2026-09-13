#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter a number (1-7) : ";
    cin >> x;

    switch (x)
    {
    case 1:
        cout << "\tMonday";
        break;
    case 2:
        cout << "\tTuesday";
        break;
    case 3:
        cout << "\tWednesday";
        break;
    case 4:
        cout << "\tThuday";
        break;
    case 5:
        cout << "\tfriday";
        break;
    case 6:
        cout << "\tSatday";
        break;
    case 7:
        cout << "\tSunday";
        break;
    default:
        cout << "Please enter valid input";
    }
}