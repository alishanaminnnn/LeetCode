// Given an integer array nums of length n, you want to create an array ans of length 
// 2n where ans[i] == nums[i] and ans[i + n] == nums[i] for 0 <= i < n (0-indexed).


#include <iostream>
using namespace std;

class ArrayList
{
private:
    int *arr;
    int *curr;
    int lenght;
    int capacity;

public:
    ArrayList(int c)
    {
        arr = new int[c];
        curr = nullptr;
        lenght = 0;
        capacity = c;
    }
    void back()
    {
        curr--;
    }
    void next()
    {
        curr++;
    }
    void start()
    {
        curr = arr;
    }
    void tail()
    {
        start();
        if (lenght == 0)
        {
            curr = arr;
        }
        else
        {
            curr = curr + lenght - 1;
        }
    }
    void insert(int position, int value)
    {
        if (position > capacity || position < 1)
        {
            cout << "Invalid Position";
        }
        else if (lenght == capacity)
        {
            cout << "Array is Full!";
        }
        else
        {
            tail();
            curr = curr + 1;
            for (int i = lenght; i >= position; i--)
            {
                *(curr) = *(curr - 1);
                back();
            }
            start();
            *(curr + position - 1) = value;
        }
        lenght++;
    }
    void remove(int position)
    {
        if (position < 1 || position > lenght)
        {
            cout << "Invalid Position";
        }
        else
        {
            start();
            curr = curr + position - 1;
            for (int i = lenght; i >= position; i--)
            {
                *curr = *(curr + 1);
                next();
            }
            lenght--;
        }
    }
    void display()
    {
        start();
        cout << "Array: ";
        for (int i = 0; i < lenght; i++)
        {
            cout << *(arr + i) << " ";
        }
        cout<<endl;
    }
    int getLenght()
    {
        return lenght;
    }

    void reverse()
    {
        start();
        for (int i = 0; i < lenght/2; i++)
        {
            int temp=*(arr+i);
            *(arr+i)=*(arr+lenght-i-1);
            *(arr+lenght-i-1)=temp;
        }
    }

    int maximum(){
        start();
        int max;
        max=*arr;
        for (int i = 0; i < lenght; i++)
        {
            if (max<*(curr+i))
            {
                max=*(curr+i);
            }
           
        }
        return max; 
    }

    void contentation(){
        int *cnt;
        cnt=new int[2*lenght];
        int *curr1=cnt;
        start();
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < lenght ; j++)
            {
                *(curr1+j)=*(curr+j);
            }
            curr1=curr1+lenght;
        }
        cout<<"Contentation: ";
        for (int i = 0; i < 2*lenght; i++)
        {
            cout<<*(cnt+i)<<" ";
        }
        
    }
};