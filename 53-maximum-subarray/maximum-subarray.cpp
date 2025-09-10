class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int current_sum=nums[0];
        int max_sum=nums[0];
        for (int a=1;a<nums.size();a++){
            current_sum=max(nums[a],current_sum+nums[a]);
            max_sum=max(max_sum,current_sum);
        }
        return max_sum;
    }
};
