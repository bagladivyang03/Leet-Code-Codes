class Solution {
    unordered_map<int, string> mp;
public:
    void backtrack(vector<string> &ans, string digits, int id, string &temp){
        if(id>=digits.size())
            return;
        string s = mp[digits[id]-'0'];
        for(int i=0;i<s.size();i++){
          temp.push_back(s[i]);
            backtrack(ans,digits,id+1,temp);
            if(temp.size()==digits.size())
                ans.push_back(temp);
            temp.pop_back();
        }
        
    }
    vector<string> letterCombinations(string digits) {
       vector<string> ans; 
        if(digits.size()==0)
            return ans;
        mp[2] = "abc";
        mp[3] = "def";
        mp[4] = "ghi";
        mp[5] = "jkl";
        mp[6] = "mno";
        mp[7] = "pqrs";
        mp[8] = "tuv";
        mp[9] = "wxyz";
        string temp;
        backtrack(ans,digits,0,temp);
        return ans;
    }
};







