class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for( int i : nums){
            mp[i]++;
        }
        vector<pair<int,int>>list;
        for(auto pair : mp){
            list.push_back({pair.second,pair.first});
        }
        sort(list.rbegin(),list.rend()); 
        int i = 0;
        vector<int> ans;
        while(k > i){
            ans.push_back(list[i].second);
            i++;
        }
        return ans;

    }
};
