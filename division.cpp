/* WAP to find quotient and remainder using pass by refrence */

#include <iostream>
using namespace std;
bool safeDivide(int numerator, int denominator,int & quotient, int & remainder){
    if(denominator==0) return false;
    quotient = numerator / denominator;
    remainder = numerator % denominator;
    return true;
}

int main() {
    int q ,r;
    bool successful=safeDivide(10,3,q,r);
    if(successful){
        cout<<"Division successful"<<endl;
        cout<<"Quotient = "<<q<<endl;
        cout<<"Remainder = "<<r<<endl;
    }
    else{
        cout<<"Error ! can't divide by 0"<<endl;
    }
    return 0;
}