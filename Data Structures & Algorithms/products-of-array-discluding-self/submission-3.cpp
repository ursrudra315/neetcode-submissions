class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int zero = 0;
        int product = 1;
        //add non zeroes
        for( int i = 0 ; i < nums.size() ; i++){
            if(nums[i]==0){
                zero++;
            }
            else{
                product = product * nums[i];
            }
        }
        vector<int> ans;

        // no of zeroes more than 2
        if(zero >= 2){
            for( int i = 0 ; i < nums.size() ; i++){
                ans.push_back(0);
            }
        }

        if(zero == 1){
            for( int i = 0 ; i < nums.size() ; i++){
                if(nums[i]==0){
                    ans.push_back(product);
                }
                else{
                    ans.push_back(0);
                }
            }
        }
        if(zero == 0){
            for( int i = 0 ; i < nums.size() ; i++){
                int bro = product / nums[i];
                ans.push_back(bro);
            }
        }
        return ans;

    }
};
