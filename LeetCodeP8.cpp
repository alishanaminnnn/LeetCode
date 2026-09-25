#include <iostream>  // Includes the input/output stream library
using namespace std; // Allows us to use cout without writing std::cout

int main()
{

    int arr[] = {2, 1, 4, 3, 6, 5}; // Creates an integer array with 6 elements

    // Loop through the array from index 0 to index 4
    for (int i = 0; i < 5; i++)
    {
        // Compare the current element with the next element
        if (*(arr + i) > *(arr + i + 1))
        {
            // Store the current element temporarily
            int temp = *(arr + i);

            // Put the next element into the current position
            *(arr + i) = *(arr + i + 1);

            // Put the original current element into the next position
            *(arr + i + 1) = temp;
        }
    }

    // Display the text "Ascending: "
    cout << "Ascending: ";

    // Loop through all 6 elements of the array
    for (int i = 0; i < 6; i++)
    {
        // Print each element using pointer arithmetic
        cout << *(arr + i) << " ";
    }

    return 0; // End the program successfully
}