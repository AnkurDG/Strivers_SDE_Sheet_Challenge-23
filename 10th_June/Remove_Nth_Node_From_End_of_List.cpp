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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode* l=head;
        int length=0,a=0;

        while(l){
            length++;
            l = l->next;
        }

    l =head;

        cout<<length;

    int m = length - n;

    if(m==0&&length==1){
        return NULL;
    }else if(m==0){
        return l->next;
    }

    cout<<m;
        while(l){
            a++;
            
            if(a==m){
                cout<<a;
                l->next=l->next->next;
            }
            l = l->next;
        }
    
    return head;
    }
};

// In O(N)

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
      ListNode* start = new ListNode();
      start->next= head;
      ListNode* fast = start;
      ListNode* slow = start;

      for(int i=1;i<=n;i++){
          fast = fast->next;
      }

      while(fast->next){
          fast = fast->next;
          slow = slow->next;
      }

      slow->next = slow->next->next;

      return start->next;
    }
};