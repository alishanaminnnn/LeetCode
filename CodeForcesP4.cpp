 // Question:
 // Given n statements of the Bit++ program, where each statement
 // either increases x by 1 (++) or decreases x by 1 (--).
 // The initial value of x is 0.
 // Execute all the statements and print the final value of x.
#include<iostream>
using namespace std;

int main(){
    int x;
    cin>>x;
    string statment;
    cin>>statment;
    if (1<=x<=150)
    {
        if (statment[1]=='+')
        {
            x++;
        }
        else
        {
            x--;
        }
    }
    cout<<x;

    return 0;
}