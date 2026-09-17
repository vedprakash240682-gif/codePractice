/* Start with an empty integer vector. Repeatedly ask the user to choose: 1. Add, 2. Remove last, or 3. Exit. Use a do-while loop. For option 1, take a number and use push_back(). For option 2, use pop_back(), but first use if to check that the vector is not empty. After every add/remove operation, display the vector.   */

#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> numbers;
    int choice, num;
    int last;

    do{
        cout<<"--Menu--"<<endl;
        cout<<"1. ADD "<<endl;
        cout<<"2. Remove last"<<endl;
        cout<<"3. Exit";
        cout<<"Enter a choice : ";
        cin>>choice;
        if (choice==1){
            cout<<"Enter a number : ";
            cin>>num;
            numbers.push_back(num);
            cout<<"\tDATA are : ";
            for(int n : numbers){
                cout<<"\t"<<n;
            }
            cout<<endl;
        }
        else if(choice==2){
            numbers.pop_back();
            cout<<"last input removed : "<<last;
            cout<<"\tDATA are : ";
            for(int n : numbers){
                cout<<"\t"<<n;
            }
            cout<<endl;
        }
        else if(choice==3){
            cout<<"Program finished"<<endl;
        }
        else {
            cout<<"invalid input"<<endl;
        }
        cout<<"\n\n";
    }while(choice!=2);

    cout<<"\tFinal data are : ";
    for(int n : numbers){
        cout<<"\t"<<n;
    }

    return 0;
}