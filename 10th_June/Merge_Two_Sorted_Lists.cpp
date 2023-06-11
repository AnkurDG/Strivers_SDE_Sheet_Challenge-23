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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* t=list1;
        ListNode* p=list2;
       ListNode* head = NULL;
        
        
       if(NULL==t) return p;
       
        else if(NULL==p) return t;

        if(t->val>p->val){
            head = p;
            p = p->next;
        }else{
            head = t;
            t = t->next;
        }

        ListNode* ans = head;

        while(t&&p){
            if(t->val>p->val){
                ans->next = p;
                p = p->next;
            }else{
                ans->next = t;
                t = t->next;
            }
            ans = ans->next;
        }

    if(t) ans->next = t;
        else ans->next = p;

      
        
        return head;
    }
};  