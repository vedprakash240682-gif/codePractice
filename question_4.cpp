/*  Take 5 integers into a vector. Traverse the vector using a range-based for loop. For every number, use if/else to print whether the number is Even or Odd. Do not sort the vector and do not use functions.   */

#include <iostream>
#include <vector>
using namespace std;
int main() {

    vector<int> numbers={12, 15, 24, 55, 80};
    cout<<"\n Elements in the vector are :";
    for(int num : numbers){
        cout<<" \t"<<num;
    }
   cout<<endl;
     for(int num : numbers){
        if(num%2==0){
            cout<<num <<"  is even"<<endl;
        }
         else{
             cout<<num<<"  is odd"<<endl;
         }
    }
    return 0;
}