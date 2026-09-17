/*  Create a C++ program that creates a vector of integers. Take 5 integers from the user using a loop, store them in the vector, and then display all 5 elements using a range-based for loop. Also display the number of elements currently present in the vector using size().   */

#include <iostream>
#include <vector>
using namespace std;
int main() {

    vector<int> numbers;
    int input;
    cout<<"\t Enter 5 integers."<<endl;
    //input using for loop and indexing
    for(int i=0 ; i<5 ; i++){
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