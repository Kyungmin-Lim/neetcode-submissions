class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int num = strs.size();
        unordered_map<string, vector<string>> map;
        vector<vector<string>> result;
        for(int i=0; i<num; i++)
        {
            string tmp = strs[i];
            sort(tmp.begin(), tmp.end());
            map[tmp].push_back(strs[i]);
        }

        for(auto& pair:map)
        {
            result.push_back(pair.second);
        }
        return result;      

        
    }
};
