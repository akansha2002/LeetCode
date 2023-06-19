// Approach - 1 (STL)
// TC - O(N * logN)

// Approach - 2 (2*N)
// Linear traversal

// Approach - 3(Binary search) -> Dutch National Flag Algorithm


// TC - O(N)

// Maintain 3 pointers -> low, mid, high
// this algorithm is based on the fact that all the elements to the left of low are 0
//and all the elements to the right to high are 2

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0, mid =0;
        int high = nums.size() - 1;
        
        while(mid <= high)
        {
            if(nums[mid] == 0)
            {
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            }
            else if(nums[mid] == 1)
            {
                mid++;
            }
            else if(nums[mid] == 2)
            {
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};


