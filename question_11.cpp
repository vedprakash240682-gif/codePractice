/* Create an empty integer vector and use a do-while loop to repeatedly ask the user to enter numbers. Add each entered number using push_back(). Stop when the user enters 0. After input is finished, use a range-based for loop to display all stored numbers. Then use another range-based for loop with if/else to count and display how many numbers are even and how many are odd. Do not store the terminating 0 in the vector.   */

#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> numbers ;
    int num;
    int even=0;
    int odd=0;
    
    cout<<"Enter zero to exit"<<endl;
    do{
        cout<<"Enter a number : ";
        cin>>num;
        numbers.push_back(num);
    }while(num!=0);

    //Display all inputs
    cout<<"\n\tDisplay all inputs : ";
    for(int n : numbers){
        cout<<"\t"<<n;
    }

    //Display odd and even
    cout<<"\n\n Display ODD and EVEN"<<endl;
    for(int n: numbers){
        if(n%2==0){
            cout<<"\t"<< n << " is even"<<endl;
            even++;
        }
        else{
            cout<<"\t"<<n <<" is odd"<<endl;
            odd++;
        }
    }
    cout<<"\n\nTotal number of even number : "<<even<<endl;
    cout<<"Total number of odd  number : "<<odd<<endl;
    return 0;
}