class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> twoSum;
        
        for (int j = 0; j < nums.size(); j++) {
            for (int k = j+1; k < nums.size(); k++) {
                if (nums[j] + nums[k] == target) {
                    twoSum.push_back(j);
                    twoSum.push_back(k);
                }
            }
        }
        
        return twoSum;
    }
};