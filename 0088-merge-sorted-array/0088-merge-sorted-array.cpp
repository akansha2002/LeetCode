// Approach - 1(Brute force)
// 2 pointers
// creating a third array
// TC - O(N+M)
// SC - O(N)

// Approach - 2(Optimal - 1)
// 2 pointers
// ptr1 = arr1[n-1]
// ptr2 = arr2[0]
// if(nums[ptr1] > nums[ptr2]) {
//     swap(nums[ptr1], nums[ptr2]);
//     ptr1--;
//     ptr2++;
// }
// do this unless you get nums[ptr1] < nums[ptr2]

// now sort(nums1), (nums2)



// in this case we could have just copy pasted elements of nums2 in nums 1
// and called the sort function
// sort(nums1.begin(), nums1.end())

// TC - O((N+M)* log(N+M))
// SC - O(1)

// Approach - 3(Optimal - 2) (GAP Method)
// 2 pointers
// gap method intution comes from 'shell sort'
// int gap = ceil((n+m)/2)
// ptr1 = 0; ptr2 = gap;
// if(nums[ptr1] < nums[ptr2]) ptr1++;ptr2++;
// else swap(nums[ptr1], nums[ptr2]) ; ptr1++;ptr2++

// if (gap > n+m) => ceil(gap/2)








class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1, j = n - 1, k = m + n - 1;
        while (i >= 0 && j >= 0) {
            if (nums1[i] < nums2[j]) 
                nums1[k--] = nums2[j--];
            else
                nums1[k--] = nums1[i--];
        } 
        while (i >= 0)
            nums1[k--] = nums1[i--];
        while (j >= 0)
            nums1[k--] = nums2[j--];
    }
};