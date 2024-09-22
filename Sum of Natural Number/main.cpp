#include <iostream>
using namespace std;
int main()
{
    int Num, sum = 0 ; // declare the variable (Num)
    
    cout << "Enter Input: "; 
    cin >> Num ; // enter input from the user
    
    for (int i = 1; i <= Num; ++i)  // use a for loop to calculate the sum (from 1 to Num)
    { sum += i; } // accumulate the sum
    
    cout << "Sum = " << sum << endl; // output the result
    
    return 0; // end the program
}
