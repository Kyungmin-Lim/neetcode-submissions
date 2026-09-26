class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> left(nums.size(), 1);
        vector<int> right(nums.size(), 1);
        vector<int> result;

        //left[0] = 1;
        //left[1] = nums[0];
        for(int i = 1; i<nums.size(); i++)
        {
            left[i] = left[i-1]*nums[i-1];
        }
        
        //right[nums.size()-1]=1;
        //right[nums.size()-2]=nums[nums[nums.size()-1]];
        for(int i= nums.size()-2; i>=0; i--)
        {
            right[i] = right[i+1]*nums[i+1];
        }

        for(int i=0; i<nums.size();i++)
        {
            result.push_back(left[i]*right[i]);
        }
        return result;

    }
};
