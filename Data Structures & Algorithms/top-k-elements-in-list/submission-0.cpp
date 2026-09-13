class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        vector<vector<int>> bucket(n+1);
        unordered_map<int, int> m;

        for(auto num:nums)
        {
            m[num]++;
        }

        for(auto it=m.begin(); it!=m.end(); it++)
        {
            // index: frequency. value: num
            bucket[it->second].push_back(it->first);
        }

        vector<int> result;
        for(int i=n; i>=0; i--)
        {
            for(auto it: bucket[i])
            {
                result.push_back(it);
                if(result.size()==k)
                {
                    return result;
                }
            }

        }
        return result;
        
    }
};
