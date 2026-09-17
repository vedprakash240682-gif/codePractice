/*  Take one integer from the user. Use if, else if, and else to print: Positive if the number is greater than 0, Negative if it is less than 0, and Zero if it is equal to 0.   */

#include <iostream>
using namespace std;
int main() {
    int num;
    cout<<"\n Enter a number :";
    cin>>num;
 
if(num>0){
    cout<<"number in positive"<<endl;
}
else if(num<0){
    cout<<"number is negative"<<endl;
}
else{
    cout<<"number is zero"<<endl;
}
    return 0;
}