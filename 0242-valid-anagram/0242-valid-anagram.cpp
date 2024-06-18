class Solution {
public:
    bool isAnagram(string s, string t) {

        // create hashmap from s, storing char: count
        // iterate through string t, subtracting count for each char
        // if less than 0, not an anagram

        if(s.size() != t.size()){
            return false;
        }

        std::unordered_map<char,int> s_mp;

        for(char c: s){
            s_mp[c] += 1;
        }

        for(char c: t){
            s_mp[c] -= 1;

            if(s_mp[c] < 0){
                return false;
            }
        }

        return true;
        
    }
};