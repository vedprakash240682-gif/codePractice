/* Build a small vector controller using only the concepts studied so far. Start with an empty integer vector and repeatedly show: 1. Add number, 2. Remove last number, 3. Display all numbers, 4. Display size, 5. Exit. Use a do-while loop for the menu. Use if/else to handle choices. Use push_back() for adding and pop_back() for removing. Before pop_back(), check with if/else that the vector is not empty. Use a range-based for loop to display the vector. Keep the program within the topics listed in this worksheet; do not use classes, functions, algorithms, iterators, or advanced STL features.   */

#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> numbers;
    int choice, num;

    do{
        cout<<"--Menu--"<<endl;
        cout<<"1. ADD "<<endl;
        cout<<"2. Remove last"<<endl;
        cout<<"3. Display all numbers"<<endl;
        cout<<"4. display size"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Enter a choice : ";
        cin>>choice;
        if (choice==1){
            cout<<"Enter a number : ";
            cin>>num;
            numbers.push_back(num);
            cout<<endl;
        }
        else if(choice==2){
            if(numbers.size()==0){
                cout<<"\n\t\tvector is empty"<<endl;
            }
            else{
                numbers.pop_back();
                cout<<"\n\t\tlast input removed : ";
            }
            cout<<endl;
        }
        else if(choice==3){
            cout<<"\n\tdata in vector are : ";
            for(int n : numbers){
                cout<<"\t"<<n;
            }
            cout<<endl;
        }
        else if (choice==4){
            cout<<"\n\t\tSize of vector : "<<numbers.size()<<endl;
        }
        else if(choice==5){
            cout<<"Data process finish"<<endl;
        }
        else {
            cout<<"\n\t\tinvalid input"<<endl;
        }
        cout<<"\n\n";
    }while(choice!=5);

    cout<<"\tFinal data are : ";
    for(int n : numbers){
        cout<<"\t"<<n;
    }

    return 0;
}