class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Time complexity: O(N)
        // Space complexity: O(N)
        vector<int> result;
        unordered_map<int, int> map;
        int num = nums.size();

        for(int i=0; i<num; i++)
        {
            int key = nums[i];
            int val = i;

            if(map.find(target-key)!=map.end())
            {
                result.push_back(map[target-key]);
                result.push_back(i);
                return result;
            }
            map[key] = val;
        }
        return {};
    }
};
