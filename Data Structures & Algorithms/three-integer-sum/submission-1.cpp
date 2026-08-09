class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // Time complexity: O(N^2+NlogN) = O(N^2)
        // Space complexity: O(1)
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        int num = nums.size();
        int prev;

        for(int i=0; i<num-2; i++)
        {      
            if(i>0 && nums[i]==nums[i-1]) continue;
            int front = i+1;
            int end = num-1;

            while(front<end)
            {
                if(nums[front]+nums[end]+nums[i] == 0)
                {
                    result.push_back({nums[i], nums[front], nums[end]});
                    front++;
                    end--;

                    while(front<end && nums[front-1]==nums[front]) front++;
                    while(front<end && nums[end+1]==nums[end]) end--;

                }
                else if(nums[front]+nums[end] < -1*nums[i])
                {
                    front++;
                }
                else
                {
                    end--;
                }
            }            
        }
        return result;
        
    }
};
