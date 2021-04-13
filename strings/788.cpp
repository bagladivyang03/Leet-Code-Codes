class Solution {
public:
    int rotatedDigits(int N) {
        int res = 0;
        for(int i=1;i<=N; i++){
            string tmp = to_string(i);
            int one_zero_eight = 0;
            for(int j =0;j<tmp.length(); j++){
                if(tmp[j]=='3' || tmp[j]=='4'|| tmp[j]=='7'){
                    res++;
                    break;
                }
                if(tmp[j]=='0' || tmp[j]=='1' || tmp[j]=='8')
                    one_zero_eight++;
                if(one_zero_eight==tmp.length())
                    res++;
            }
        }
        return N-res;
    }
};


