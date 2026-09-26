// Given the head of a linked list, remove the nth node from the end of the list and return its head.
 struct ListNode {
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
    ListNode *curr;

    Solution()
    {
        lenght = 0;
        curr = nullptr;
    }

    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        curr = head;
        lenght = 0;

        // Count all nodes
        while (curr != nullptr)
        {
            lenght++;
            curr = curr->next;
        }

        // If we need to remove the head
        if (n == lenght)
        {
            ListNode *temp = head;
            head = head->next;
            delete temp;
            return head;
        }

        // Move to the node before the one to delete
        curr = head;

        for (int i = 1; i < lenght - n; i++)
        {
            curr = curr->next;
        }

        ListNode *temp = curr->next;
        curr->next = temp->next;
        delete temp;

        return head;
    }
};