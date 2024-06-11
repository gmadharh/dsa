class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // have a map with num:count
        // push the pair into a heap
        // pop k elements

        std::unordered_map<int,int> mp;

        for(int i = 0;i < nums.size();++i){
            mp[nums[i]] += 1;
        }

        std::priority_queue<std::pair<int,int>> heap;

        for(const auto& pair: mp){
            heap.push(std::make_pair(pair.second,pair.first));
        }


        std::vector<int> ans;
        for(int i = 0;i < k;++i){
            ans.push_back(heap.top().second);

            heap.pop();
        }

        return ans;

    }
};