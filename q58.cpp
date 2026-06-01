class Solution {
public:
    int lengthOfLastWord(string s) {
        while(s[s.size()-1] == ' '){
            s.pop_back();
        }
        for(int i = s.size()-1;i>=0;i--){
            if(s[i]==' '){
                return (s.size()-1-i);
            }
        }
        return s.size();
    }
};
