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
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head->next == NULL ) return head;
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* p1 = dummy;
        ListNode* p2 = head;
        ListNode* p3 = p2->next;
        ListNode* p4 = p3->next;

        while(p1!=NULL && p2 != NULL && p3!= NULL && p4!= NULL){
            p1->next=p3;
            p3->next=p2;
            p2->next=p4;

            p1=p2;
            p2=p4;
            p2!=NULL ? p3=p2->next : p3 = NULL;
            p3!=NULL ? p4=p3->next : p4=NULL;

        }
        if(p4==NULL && p3!=NULL){
            p1->next=p3;
            p3->next=p2;
            p2->next=p4;
        }
        return dummy->next;
    }
};