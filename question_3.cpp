/*  Create a vector containing the numbers 10, 20, 30, 40, and 50. Display the vector first. Then use pop_back() once and display the vector again. Finally, display the new size of the vector. Do not use any advanced vector operation.   */

#include <iostream>
#include <vector>
using namespace std;
int main() {

    vector<int> numbers={10, 20, 30, 40, 50};
    cout<<"\n Elements in the vector are :";
    for(int num : numbers){
        int temp;
        cout<<" \t"<<num;
    }
    cout<<"\n\tLength of vector : "<<numbers.size()<<endl;
    
    //pop last elrment
    numbers.pop_back();
    cout<<"\nupdated vector are : ";
     for(int num : numbers){
        cout<<"\t"<<num;
    }
    cout<<"\n\tLength of vector : "<<numbers.size()<<endl;
    
   

    return 0;
}