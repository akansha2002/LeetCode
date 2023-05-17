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

// Approach 1
// reverse the right half of linked list
// one pointer at start, one at mid, do the sum, and keep on going like this

// store all the values of node in linked list with indices, and then do the sum

class Solution {
public:
    int pairSum(ListNode* head) {
        unordered_map<int, int>m;
        int ind = 0, maxSum = 0;
        while(head!=NULL) {
            m[ind++]=head->val;
            head = head->next;
        }
        int total = ind;
        int count = ind/2;
        ind=0;
        
        while(count--){
            maxSum = max(maxSum, m[ind] + m[total-ind-1]);
            ind++;
        }
        return maxSum;
    }
};