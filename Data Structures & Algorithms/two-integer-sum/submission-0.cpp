class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>seen;
        for (int i ; i < nums.size(); i++) {
            int complete = target - nums[i];
            if(seen.count(complete)){
                return {seen[complete],i };

            }
            seen[nums[i]] = i;
        }
    }
};
