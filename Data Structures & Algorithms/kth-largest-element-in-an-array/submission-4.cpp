class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        /*
        // Time complexity: O(NlogN)
        // Space complexity: O(1)
        sort(nums.begin(), nums.end());

        int n = nums.size();
        
        return nums[n-k];
        */

        /*
        // Time complexity: O(NlogN)
        // Space complexity: O(N)

        priority_queue<int> maxHeap;

        for(int i=0; i<nums.size(); i++)
        {
            maxHeap.push(nums[i]);
        }

        for(int i=0; i<k-1; i++)
        {
            maxHeap.pop();
        }
        return maxHeap.top();
        */

        // Time complexity: O(NlogN)
        // Space complexity: O(k)
        priority_queue<int, vector<int>, greater<int>> minHeap;

        for(int num: nums)
        {
            minHeap.push(num);
            if(minHeap.size()>k)
            {
                minHeap.pop();
            }
        }
        return minHeap.top();
        
    }
};
