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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* dummy1 = new ListNode(0);
        dummy1->next = head;
        ListNode* dummy2 = dummy1;
        
        int total=0, count=0, a, b;

        while(temp!=NULL){
            temp = temp->next;
            total++;
        }
        
        while(count != k ){
            dummy1 = dummy1->next;
            count++;
        }
        count = 0;
        while(count != total + 1 - k){
            dummy2 = dummy2->next;
            count++;
        }
        int temp1 = dummy1->val;
        dummy1->val = dummy2->val;
        dummy2->val = temp1;

        
        
        return head;
    }
};