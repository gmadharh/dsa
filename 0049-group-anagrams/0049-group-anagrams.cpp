class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        // create map of sorted_str : array of anagrams
        // store temp, sort, add to ans

        std::unordered_map<std::string,std::vector<std::string>> groups;


        std::string temp;
        for(auto str: strs){
            temp = str;
            std::sort(str.begin(),str.end());
            groups[str].push_back(temp);
        }


        std::vector<std::vector<std::string>> ans; 
        for(auto pair:groups){
            ans.push_back(pair.second);
        }

        return ans;

    }
};