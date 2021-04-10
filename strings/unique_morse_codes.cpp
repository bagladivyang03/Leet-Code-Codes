class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
       vector<string> v ={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string> s;
        for(int i=0;i<words.size();i++){
            string a = words[i],b="";
            for(int j =0;j<a.size();j++)
                b += v[words[i][j]-'a'];
            s.insert(b);
        }
        return s.size();
    }
};




