class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        std::unordered_set<int> num_set(nums.begin(),nums.end());


        int count = 0;
        int longest = 0;
        for(int i = 0;i < nums.size();i++){
            
            if(num_set.count(nums[i]-1) == 0){

                while(num_set.count(nums[i]+count) > 0){
                    count++;
                }

                longest = std::max(longest,count);
                count = 0;

            }

        }

        return longest;



        
    }
};