struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* curr1=l1;
        ListNode* curr2=l2;
        ListNode* l3=nullptr;
        int counter1=0;
        int counter2=0;
        int counter=0;


        while(curr1!=nullptr){
            counter1++;
            curr1=curr1->next;
        }
        while(curr2!=nullptr){
            counter2++;
            curr2=curr2->next;
        }
        curr1=l1;
        curr2=l2;
        if (counter1>counter2)
        {
            counter=counter1;
        }
        else
        {
            counter=counter2;
        }
        
        for (int  i = 0; i < counter; i++)
        {
            
        }
        
        
        
    }
};