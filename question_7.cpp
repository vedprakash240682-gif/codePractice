/*Write a program that repeatedly asks the user to enter a number while the number is not 0. Use a while loop. For every entered number, print whether it is positive or negative using if/else. When the user enters 0, stop the loop and print Program ended.   */

#include <iostream>
using namespace std;
int main() {
    int num=1;

while(num!=0){
    cout<<"\n Enter a number :";
    cin>>num;
     if(num%2==0){
            cout<<num <<"\t  is even"<<endl;
        }
    else{
            cout<<num<<"\t  is odd"<<endl;
        }
}
 cout<<"Program ended";
    return 0;
}