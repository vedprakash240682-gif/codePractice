// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> numbers;
    // push values to array
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);
    cout << "\n\tSize of vector : " << numbers.size() << endl;

    // print values using for
    int i = 0;
    for (int num : numbers)
    {
        cout << "Values at index " << i << " : " << num << endl;
        i++;
    }
    i = 0;

    numbers.pop_back();
    numbers.pop_back();
    // print values after pop
    cout << "\n\tSize of vector : " << numbers.size() << endl;
    // print values using for
    for (int num : numbers)
    {
        cout << "Values at index " << i << " : " << num << endl;
        i++;
    }
    return 0;
}