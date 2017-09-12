/**
 * 1. Put '0's to the low position.
 * 2. Put '2's to the high position.
 * 3. Jump '1's.
 */
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0, high = nums.size()-1;
        for(int i = 0; i <= high;)
            if(nums[i] == 0) 
                swap(nums[i++], nums[low++]);
            else if(nums[i] == 2) 
                swap(nums[i], nums[high--]);
            else i++;
    }
};

// Shorter.
class Solution {
public:
    void sortColors(vector<int>& nums) {
        for(int i = 0, j = 0, k = nums.size() - 1; j <= k;)
            if(nums[j] == 0) swap(nums[i++], nums[j++]);
            else if(nums[j] == 2) swap(nums[j], nums[k--]);
            else j++;
    }
};
