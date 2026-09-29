/*WAP a program to swap two numbers using pass by value*/

#include <iostream>
using namespace std;
void swap(int a, int b){
    int temp =a ;
    a= b;
    b=temp;
    cout<<"After swapping inside swap function"<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
}
int main() {
    int x=10;
    int y=20;
    // Prints value before swapping
    cout<<"Before swapping"<<endl;
    cout<<"x = "<<x<<endl;
    cout<<"y = "<<y<<endl;
    
    //calling swap function
    swap(x,y);
    cout<<"After swapping in main function"<<endl;
    cout<<"x = "<<x<<endl;
    cout<<"y = "<<y<<endl;
    return 0;
}