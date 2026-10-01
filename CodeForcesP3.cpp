// Question:
// There are n problems and three friends: Petya, Vasya, and Tonya.
// For each problem, we are given 0 or 1 for each friend.
// 1 means the friend is sure about the solution, and 0 means they are not.
// The friends will solve a problem if at least two of them are sure.
// Find and print the number of problems they will solve.

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int count=0;
    if (n>=1&&n<=100)
    {
    int arr[n][3];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i][0]+arr[i][1]+arr[i][2]>1)
        {
            count++;
        }
    }
    }
    
cout<<count;
    

    return 0;
}