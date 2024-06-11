class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        int l = 0;
        int r = numbers.size() - 1;

        std::vector<int> ans;

        while(l < r){

            int sum = numbers[l] + numbers[r];

            if(sum == target){
                ans.push_back(++l);
                ans.push_back(++r);
                break;
            }

            if(sum < target){
                l++;
            }
            else if(sum > target){
                r--;
            }


        }

        return ans;

    }
};