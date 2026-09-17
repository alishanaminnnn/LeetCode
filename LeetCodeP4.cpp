
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode *List;
    ListNode *curr;
    ListNode *curr1;
    ListNode *curr2;

public:
    Solution(){
        curr1=nullptr;
        curr2=nullptr;
        List=nullptr;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        curr1=l1;
        curr2=l2;
        while(curr1!=nullptr || curr2!=nullptr){
            int tempNum=0;
            tempNum=(curr1->val)+(curr2->val);
            if(List==nullptr){
                if(tempNum>9){
                    List=new ListNode(tempNum%10);
                }
                else{
                    List=new ListNode(tempNum);
                }
            }
                    
            else{
                ListNode *temp=nullptr;
                if(tempNum>=10){
                    temp=new ListNode(tempNum+1);
                    temp->next=List;
                    List=temp;
                }
                else{
                    temp=new ListNode(tempNum);
                    temp->next=List;
                    List=temp;
                }
            }
            curr1=curr1->next;
            curr2=curr2->next;
        }
        return List;
    }
    

};