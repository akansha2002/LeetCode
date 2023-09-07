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
     ListNode* reverseList(ListNode* head) {
         
         
        if(head == NULL || head->next == NULL)
           return head;
        
        ListNode* after = head->next;
        ListNode* newHead = reverseList(head->next);
        after->next=head;
        head->next=NULL;
        
        return newHead;
        
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL || k==0) return head;
        
        ListNode* temp = head;
        int totalCount = 0;
        
        while(temp!=NULL){
            totalCount++;
            temp = temp->next;
        }
        
         k = k % totalCount;
        if(k==0) return head;
        int x = totalCount - k;
        temp = head;
        
        if(x == 0) return head;
        int y = x-1;
        
        while(temp!=NULL && y--){
            temp = temp->next;
        }
        ListNode* t2 = temp->next;
        // t2 = reverseList(t2);
        ListNode* newHead = t2;
        
        temp->next = NULL;
        
        while(t2->next!=NULL){
            t2 = t2->next;
        }
        
        t2->next = head;
        return newHead;
        
    }
};