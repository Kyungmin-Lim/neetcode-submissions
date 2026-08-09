class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        unordered_map<int, int> map;
        int num = nums.size();

        for(int i=0; i<num; i++)
        {
            int key = nums[i];
            int val = i;

            if(map.find(target-key)!=map.end())
            {
                if(i < map[target-key])
                {
                    result.push_back(i);
                    result.push_back(map[target-key]);
                }
                else
                {
                    result.push_back(map[target-key]);
                    result.push_back(i);
                }
                return result;
            }
            map[key] = val;
        }
    }
};
