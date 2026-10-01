#include <iostream>
#include <string>
using namespace std;

int getSum(string word, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 65; j <= 90; j++)
        {
            if (int(word[i]) == j)
            {
                sum = sum + ((int(word[i])) - 64);
            }
        }
        for (int j = 97; j <= 122; j++)
        {
            if (int(word[i]) == j)
            {
                sum = sum + ((int(word[i])) - 96);
            }
        }
        for (int j = 1; j < 10; j++)
        {
            if ((int(word[i]) - 48) == j)
            {
                sum = sum + (int(word[i]) - 48);
            }
        }
    }
    return sum;
}

int main()
{
    string word = "Hello9";
    int size = word.length();
    int number=getSum(word, size);
    int count=0;


for (int i = 2; i <= number; i++)
{
    int isPrime = 1;

    for (int j = 2; j < i; j++)
    {
        if (i % j == 0)
        {
            isPrime = 0;
            break;
        }
    }

    if (isPrime == 1)
    {
        count++;
    }
}

cout<<number<<" "<<count;
    

    return 0;
}