/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void reorderList(ListNode* head) {
          if (!head) return;
        ListNode *slow=head;
        ListNode *fast=head;
        ListNode *prev=NULL;
        while(fast->next!=NULL && fast->next->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
    if(fast->next!=NULL)slow=slow->next;
    // till here i have got the middle of the linked list now the turn is to reverse the linked list;
    while(slow!=0)
    {
        fast=slow->next;
        slow->next=prev;
        prev=slow;
        slow=fast;
    }
    slow=prev;
    while(slow!=0&& head!=0)
     {
        fast=head->next;
        prev=slow->next;
        head->next=slow;
        slow->next=fast;
        head=fast;
        slow=prev;



      }
      if (head && head->next) head->next->next = NULL;
        
        
    }
};