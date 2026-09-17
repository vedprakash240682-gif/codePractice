/*  Create an empty integer vector. Take 6 numbers from the user one by one and add each number to the vector using push_back(). After all inputs are added, display the complete vector using a range-based for loop and display its size.   */

#include <iostream>
#include <vector>
using namespace std;
int main() {

    vector<int> numbers;
    int input;
    cout<<"\t Enter 6 integers."<<endl;
    //input using for loop and indexing
    for(int i=0 ; i<6 ; i++){
        int temp;
        cout<<"Enter number "<<(i+1) <<" :";
        cin>>input;
        numbers.push_back(input);
    }
    cout<<"\n\nLength of vector : "<<numbers.size();
    
    cout<<"\n Elements in the vector are \n";
    for(int num : numbers){
        cout<<"\t"<<num;
    }

    return 0;
}