class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int left = 0, right = nums.size() - 1;
        vector<int> result;
        result.resize(2, -1);
        if (nums.size() == 0){
            return result;
        }
        while (left + 1 < right){
            int mid = left + (right - left)/2;
            if (nums[mid] == target){
                right = mid;
            }
            else if (nums[mid] > target){
                right = mid;
            }
            else{
                left = mid;
            }
        }
        int start = -1;
        int end = -1;
        if (nums[left] == target){
            start = left;
        }else if (nums[right] == target){
            start = right;
        }else{
            return {-1, -1};
        }
        left = 0, right = nums.size() - 1;
        while (left + 1 < right){
            int mid = left + (right - left)/2;
            if (nums[mid] == target){
                left = mid;
            }
            else if (nums[mid] > target){
                right = mid;
            }
            else{
                left = mid;
            }
        }
        if (nums[right] == target){
            end = right;
        }else if (nums[left] == target){
            end = left;
        }else{
            return {-1, -1};
        }
        result[0] = start;
        result[1] = end;
        return result;
    }
};
