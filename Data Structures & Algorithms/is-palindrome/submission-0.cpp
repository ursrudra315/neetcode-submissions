class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> str;
        for( char i : s){
            if(isalnum(i)){
            str.push_back(tolower(i));
            }
        }
        int left = 0;
        int right = str.size() - 1;
        while(left < right){
            if( str[left] == str[right]){
                left++;
                right--;
            }
            else{
                return false;
            }
        }
        return true;

        
    }
};
