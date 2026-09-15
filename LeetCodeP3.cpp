//Given the head of a singly linked list, reverse the list, and return the reversed list.

#include <iostream>
using namespace std;

class ListNode
{
public:
    int data;
    ListNode *next;

public:
    ListNode(int value)
    {
        data = value;
        next = nullptr;
    }

};

class Solution
{
public:
    ListNode* reverseList(ListNode* head)
    {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* next = nullptr;

        while (curr != nullptr)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        return prev;
    }
};



int main()
{
    ListNode *head;

    return 0;
}