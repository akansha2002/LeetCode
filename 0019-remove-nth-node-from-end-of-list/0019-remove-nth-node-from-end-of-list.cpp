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
// reverse ll and remove nth node
// traverse through ll and the remove total-nth node

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == NULL || head->next == NULL) return NULL;
        ListNode* temp = head;
        int count=0;
        
        while(temp!=NULL){
            temp = temp->next;
            count++;
        }
        if(n==count)
        {
            return head->next;
        }
        int x = count-n-1;;
        temp = head;
        cout<<x;
        while(x--){
           temp=temp->next; 
        }
        temp->next = temp->next->next;
        return head;
    }
};