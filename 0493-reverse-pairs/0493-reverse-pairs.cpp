

class Solution {
public:
    int count = 0;

void merge( int low, int mid, int high, vector<int>& nums){
        int j = mid+1;
        for(int i=low; i<=mid; i++){
            while(j<=high && nums[i] > 2*(long long)nums[j]){
                j++;
            }
        }
        int size = high-low+1;
        vector<int> temp(size, 0);
        int left = low, right = mid+1, k=0;
        while(left<=mid && right<=high){
            if(nums[left] < nums[right]){
                temp[k++] = nums[left++];
            }
            else{
                temp[k++] = nums[right++];
            }
        }
        while(left<=mid){
            temp[k++] = nums[left++]; 
        }
        while(right<=high){
            temp[k++] = nums[right++]; 
        }
        int m=0;
        for(int i=low; i<=high; i++){
            nums[i] = temp[m++];
        }
    }

    void countPairs(int low, int mid, int high, vector<int>& nums){
        int j = mid+1;
        for(int i=low; i <= mid; i++){
            while(j <= high && nums[i] > 2* (long long)nums[j] ){
                j++;
            }
            count += j- (mid+1);
        }
    }

    void mergeSort(vector<int>& nums, int low, int high){
        if(low >= high) return;
        int mid = low + (high - low)/2;
        mergeSort(nums, low, mid);
        mergeSort( nums, mid+1, high);
        countPairs(low, mid, high, nums);
        merge(low, mid, high, nums);
    }

    int reversePairs(vector<int>& nums) {
        mergeSort(nums, 0, nums.size()-1);
        return count;
    }
};