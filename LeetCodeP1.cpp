// Given the head of a sorted linked list, delete all duplicates such that each element appears only once. 
// Return the linked list sorted as well.

#include <iostream>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *curr;
public:
    Solution():curr(nullptr){}

    ListNode *deleteDuplicates(ListNode *head)
    {
        curr=head;
        while (curr!=nullptr)
        {
            if (  curr->next != nullptr &&  curr->val==curr->next->val )
            {
               ListNode * duplicate=curr->next;
               curr->next=curr->next->next;
               delete duplicate;
            }
            else{
            curr=curr->next; 
            }
        }
        return head; 
    }
};