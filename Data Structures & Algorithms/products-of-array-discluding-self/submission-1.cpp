class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();

        vector<int> result(n);

        int left_accum = 1;
        for(int i=0; i<n; i++)
        {
            result[i] = left_accum;
            left_accum = left_accum*nums[i];
        }
        int right_accum = 1;
        for(int i=n-1; i>=0; i--)
        {
            result[i] *= right_accum;
            right_accum = right_accum*nums[i];
        }
        return result;

    }
};
