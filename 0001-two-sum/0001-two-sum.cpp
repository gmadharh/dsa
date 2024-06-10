class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        std::unordered_map<int,int> mp;

        std::vector<int> ans;

        for(int i = 0;i < nums.size();i++){

            // target - nums[i] == in map
            // 9 - 2 == 7 in map
            if(mp.find(target - nums[i]) != mp.end()){
                ans.push_back(i);
                ans.push_back(mp[target - nums[i]]);
                break;
            }

            mp[nums[i]] = i;
        }
        return ans;
    }
};