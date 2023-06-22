// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//         int slow = nums[0], fast = nums[0];
//         do {
//             slow = nums[slow];
//             fast = nums[nums[fast]];
//         } while (slow != fast);
//         fast = nums[0];
//         while (slow != fast) {
//             slow = nums[slow];
//             fast = nums[fast];
//         }
//         return slow;
//     }
// };

//  Approach - 1(Sorting)
// TC - O(N * logN)
// SC - O(1)

// Approach - 2 (Hashing)
// TC - O(N)
// SC(N)

// Approach - 3(Floyd Cycle Detection)
// maintain 2 pointers-> fast, slow

// intution -> the 2nd time fast and slow pointers will meet, will be our ans
// dist(b/w 1st intersection point and beginning of cycle) = 
// dist(b/w starting pt and beginning of cycle)

// Approach
// initially fast =0, slow = 0;
// move fast by 2 steps, slow by 1 step
// stop at that point when fast and slow pointers meet
// now fast = starting point
// again move fast and slow pointers, but this time by 1 step
// when they meet, its our ans

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0], fast = nums[0];
        do{
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while(slow != fast);
        fast = nums[0];
        while(slow != fast){
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;

    }
};















