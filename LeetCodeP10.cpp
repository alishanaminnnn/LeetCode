// Convert Binary Number in a Linked List to Integer
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
    int getDecimalValue(ListNode *head)
    {
        ListNode *curr = head;
        int counter = 0;
        while (curr!= nullptr)
        {
            counter++;
            curr = curr->next;
        }
        curr = head;
        int decimal = 0;
        for (int i = counter-1; i >=0; i--)
        {
            if (curr->val == 0)
            {
                decimal = decimal + 0;
            }
            else
            {
                decimal = decimal + getPower(i);
            }
            curr=curr->next;
        }
        return decimal;
    }
    int getPower(int a)
    {
        int pwr = 1;
        for (int i = 1; i <= a; i++)
        {
            pwr = pwr * 2;
        }
        return pwr;
    }
};