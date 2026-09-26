class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> s;

        for(auto i:nums)
        {
            if(s.find(i)==s.end())
            {
                s.insert(i);
            }
            else
            {
                return true;
            }

        }
        return false;
        
    }
};