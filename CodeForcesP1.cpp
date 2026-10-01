// Question:
// Given the weight of a watermelon, check whether it can be divided
// into two positive parts such that both parts have an even number of kilos.
// Print "YES" if it is possible, otherwise print "NO".

#include<iostream>
using namespace std;

int main(){
    int w;
    cin>>w;
    if (w%2==0)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}