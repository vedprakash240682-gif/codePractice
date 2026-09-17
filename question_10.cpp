/* Create a vector containing 8 integers of your choice. Use the range-based loop in this form: for (number : numbers) (with the required C++ type before the variable). For each element, use if/else to print whether it is greater than 50 or not. Do not use indexes in this question.   */

#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> numbers ={20 ,30, 80, 65, 22, 77, 62, 49, 51};
    for(int number :numbers){
        if(number<50){
            cout<<number <<" is less than 50"<<endl;
        }
        else if(number>50){
            cout<<number <<" is greater than 50"<<endl;
        }
        else{
            cout<<number <<" equal to 50"<<endl;
        }
    }

    return 0;
}