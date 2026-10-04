class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        set<int> set1;

        for(int i : nums) {
            set1.insert(i);
        }

        vector<int> v(set1.begin(), set1.end());

        if(v.empty()) {
            return 0;
        }

        int right = 1;
        int count = 1;
        int ans = 1;

        while(right < v.size()) {

            if(v[right] == v[right - 1] + 1) {
                count++;
            }
            else {
                count = 1;
            }

            ans = max(ans, count);

            right++;
        }

        return ans;
    }
};