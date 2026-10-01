/*
Question:

Write a C++ program that takes a string containing uppercase letters,
lowercase letters, and digits. Calculate the sum of the values of all
characters, where:

- A = 1, B = 2, ..., Z = 26
- a = 1, b = 2, ..., z = 26
- Digits have their actual numeric value

Then, using this sum as a number, count how many prime numbers exist
from 2 up to that number.
*/

#include <iostream>
#include <string>
using namespace std;

// This function calculates the total value of all characters in the string.
int getSum(string word, int size)
{
    // Variable used to store the total sum.
    int sum = 0;

    // Loop through every character of the string.
    for (int i = 0; i < size; i++)
    {
        // Check for uppercase letters.
        // ASCII values of uppercase letters are A = 65 to Z = 90.
        for (int j = 65; j <= 90; j++)
        {
            // Check whether the current character has the ASCII value j.
            if (int(word[i]) == j)
            {
                // Convert the uppercase letter into its position.
                // A = 65, so 65 - 64 = 1.
                sum = sum + ((int(word[i])) - 64);
            }
        }

        // Check for lowercase letters.
        // ASCII values of lowercase letters are a = 97 to z = 122.
        for (int j = 97; j <= 122; j++)
        {
            // Check whether the current character has the ASCII value j.
            if (int(word[i]) == j)
            {
                // Convert the lowercase letter into its position.
                // a = 97, so 97 - 96 = 1.
                sum = sum + ((int(word[i])) - 96);
            }
        }

        // Check for digits.
        // ASCII values of '0' to '9' are 48 to 57.
        for (int j = 1; j < 10; j++)
        {
            // Subtract 48 to convert the ASCII value of the digit
            // into its actual numeric value.
            if ((int(word[i]) - 48) == j)
            {
                // Add the actual numeric value of the digit to sum.
                sum = sum + (int(word[i]) - 48);
            }
        }
    }

    // Return the final sum.
    return sum;
}

int main()
{
    // String whose characters will be converted into values.
    string word = "Hello9";

    // Get the length of the string.
    int size = word.length();

    // Calculate the total value of the string.
    int number=getSum(word, size);

    // Variable used to count the number of prime numbers.
    int count=0;


// Start from 2 because 2 is the first prime number.
for (int i = 2; i <= number; i++)
{
    // Assume that the current number is prime.
    int isPrime = 1;

    // Check whether i is divisible by any number
    // between 2 and i-1.
    for (int j = 2; j < i; j++)
    {
        // If i is exactly divisible by j,
        // then i is not a prime number.
        if (i % j == 0)
        {
            // Change isPrime to 0 to indicate that
            // the number is not prime.
            isPrime = 0;

            // Stop checking because we already know
            // that i is not prime.
            break;
        }
    }

    // If isPrime is still 1, then i is prime.
    if (isPrime == 1)
    {
        // Increase the prime counter.
        count++;
    }
}

// Display the calculated number and the total
// number of prime numbers found.
cout<<number<<" "<<count;
    

    return 0;
}