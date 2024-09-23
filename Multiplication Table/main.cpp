#include <iostream>
using namespace std;

int main() 
{
    int num;
    
    // Take input from the user
    cout << "Enter number: "; 
    cin >> num;
    
    // Use a for loop to generate 
    for (int i = 1; i <= 10; ++i) { // loop that iterates from 1 to 10
        cout << num << " x " << i << " = " << num * i << endl; // print the multiplication table 
    }

    return 0;
}
