/* WAP to swap two numbers using PASS BY REFRENCE */

#include <iostream>
using namespace std;
void swap(int &a ,int &b){
    int temp=a;
    a=b;
    b=temp; 
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
    cout<<"After swapping"<<endl;
    cout<<"x = "<<x<<endl;
    cout<<"y = "<<y<<endl;
    return 0;
}