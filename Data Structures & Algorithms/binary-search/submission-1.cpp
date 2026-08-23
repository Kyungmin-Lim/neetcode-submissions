class Solution {
public:
    int search(vector<int>& nums, int target) {
        // Time complexity: O(logN)
        // Space complexity: O(1)
        int num = nums.size();
        
        int front = 0;
        int end = num-1;
        int idx = front + (end-front)/2;
        int result = -1;

        while(front <= end)
        {
            if(nums[idx]<target)
            {
                front = idx+1;                
            }
            else if(nums[idx]>target)
            {
                end = idx-1;
            }
            else
            {
                result = idx;
                break;
            }
            idx = front + (end-front)/2;

        }
        return result;
        
    }
};
