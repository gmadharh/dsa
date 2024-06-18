class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        std::unordered_map<int,int> mp;
        int n = nums.size();

        std::vector<int> ans;
        for(int i = 0;i < n;i++){
            if(mp.count(target - nums[i]) > 0){
                ans.push_back(i);
                ans.push_back(mp[target-nums[i]]);
            }

            mp[nums[i]] = i;
        }
        return ans;

    }
};