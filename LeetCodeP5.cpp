// Given the head of a linked list, remove the nth node from the end of the list and return its head.
#include<iostream>
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
    int lenght;
    int removal;
    ListNode *curr;

public:
    Solution()
    {
        lenght = 0;
        curr = nullptr;
        removal = 0;
    }
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        curr = head;
        while (curr != nullptr)
        {
            lenght++;
            curr = curr->next;
        }

        if (lenght == 1)
        {
             
        }
        else
        {
            removal = lenght - n;
            curr = head;

            for (int i = 0; i <removal; i++)
            {
                curr = curr->next;
            }
            curr->next = curr->next->next;
            ListNode *num = curr->next;
            delete num;
        }
        return head;
    }
};
int main(){



    return 0;
}