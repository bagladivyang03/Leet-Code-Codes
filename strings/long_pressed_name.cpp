class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int i=0,j=0;
        if(name.size() > typed.size())
            return false;
        while(i<name.size() && j<typed.size()){
            if(j > 0 && typed[j-1]==typed[j] && typed[j]!=name[i])
            {
                j++;
                continue;
            }
            else if(name[i]==typed[j]){
                i++;
                j++;
            }
            else if(name[i]!=typed[j]){
                return false;
            }
        }
        if(j<typed.size()){
            char last = name[name.size()-1];
            while(j<typed.size()){
                if(typed[j]!=last)
                    return false;
                j++;
            }
        }
        if(i<name.size())
            return false;
        return true;
    }
};

