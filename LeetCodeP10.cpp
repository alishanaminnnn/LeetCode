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