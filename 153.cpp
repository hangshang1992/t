# include<iostream>
class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0, right = nums.size() - 1;
        int target = nums[right];
        // cout << tar get << " ";
        while (left + 1 < right){
            int mid = left + (right - left)/2;
            if (nums[mid] <= target ){
                right = mid;
            }else{
                left = mid;
            }
        }
        if (nums[left] <= nums[right]){
            return nums[left];
        }else{
            return nums[right];
        }
    }
};
