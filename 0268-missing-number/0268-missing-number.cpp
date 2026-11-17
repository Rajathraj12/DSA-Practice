class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int real_sum=0;
        for(int i=0;i<=n;i++){
            real_sum+=i;
        }
        int missing_number=0;
        for(int i=0;i<n;i++){
            missing_number += nums[i];
        }
        return real_sum - missing_number;
    }
};