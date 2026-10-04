class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int zeroCount = 0;
        int product = 1;

        // Find product of all non-zero numbers
        for(int i = 0; i < nums.size(); i++) {

            if(nums[i] == 0) {
                zeroCount++;
            }
            else {
                product *= nums[i];
            }
        }

        vector<int> ans;

        // More than one zero
        if(zeroCount >= 2) {

            for(int i = 0; i < nums.size(); i++) {
                ans.push_back(0);
            }

            return ans;
        }

        // Exactly one zero
        if(zeroCount == 1) {

            for(int i = 0; i < nums.size(); i++) {

                if(nums[i] == 0)
                    ans.push_back(product);
                else
                    ans.push_back(0);
            }

            return ans;
        }

        // No zero
        for(int i = 0; i < nums.size(); i++) {
            ans.push_back(product / nums[i]);
        }

        return ans;
    }
};