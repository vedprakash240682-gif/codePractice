/*Write a menu-based program using a do-while loop. The program should show two choices: 1. Add a number and 2. Exit. If the user chooses 1, take a number and add it to a vector using push_back(). If the user chooses 2, stop the program. After each addition, display the current vector.   */

#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> numbers;
    int choice, num;

    do{
        cout<<"--Menu--"<<endl;
        cout<<"1. continue "<<endl;
        cout<<"2. end"<<endl;
        cout<<"Enter a choice : ";
        cin>>choice;
        if (choice==1){
            cout<<"Enter a number : ";
            cin>>num;
            numbers.push_back(num);
        }
        else if(choice==2){
            cout<<"\nProgram finished"<<endl;
        }
        else {
            cout<<"invalid input"<<endl;
        }
    }while(choice!=2);

    cout<<"\tInputs data are : ";
    for(int n : numbers){
        cout<<"\t"<<n;
    }

    return 0;
}