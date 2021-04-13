class Solution {
public:
    bool isPalindrome(string s){
        int l = s.length();
        for(int i=0;i<l/2;i++){
            if(s[i]!=s[l-i-1])
                return false;
        }
        return true;
    }
    int removePalindromeSub(string s) {
        if(s.size()==0){
            return 1;
        }
        else if(isPalindrome(s)==true)
            return 1;
        return 2;
    }
};