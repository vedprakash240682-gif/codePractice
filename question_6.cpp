/*Create a vector of 10 integers. Use a normal for loop to take 10 values from the user and store them using push_back(). Then use another normal for loop to display the elements along with their positions/indexes. Example format: Index 0 = value.   */

#include <iostream>
#include <vector>
using namespace std;
int main() {

    vector<int> numbers;
    int input;
    cout<<"\t Enter 10 integers."<<endl;
    //input using for loop and indexing
    for(int i=0 ; i<10 ; i++){
        int temp;
        cout<<"Enter number "<<(i+1) <<" :";
        cin>>input;
        numbers.push_back(input);
    }
    
    cout<<"\n Elements in the vector are \n";
    
    for(int i=0 ;i<10 ; i++){
        cout<<"\t Element at index " << i <<" : " <<numbers[i]<<endl;
    }

    return 0;
}