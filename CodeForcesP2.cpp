// The first line contains an integer n 
// (1 ≤ n ≤ 100). Each of the following n 
// lines contains one word. All the words
//  consist of lowercase Latin letters and 
// possess the lengths of from 1 to 100 
// characters.Output
// Print n lines. The i-th line should 
// contain the result of replacing of the 
// i-th word from the input data.

#include<iostream>
#include<string>
using namespace std;

int main(){
    string word;
    cin>>word;
    int size=word.length();
    if (size>10)
    {
        cout<<word[0]<<size-2<<word[size-1];
    }
    else
    {
        cout<<word;
    }

    return 0;
}
