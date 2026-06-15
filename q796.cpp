class Solution {
public:
    string rotate(string s){
        int len = s.size();
        char temp = s[0];
        for(int j = 1;j<len;j++){
            s[j-1] = s[j];
        }
        s[len-1] = temp;
        return s;
    }
    bool rotateString(string s, string goal) {
        int len = s.size();
        if (s.size() != goal.size()) return false;
        for(int i = 0;i<len;i++){
            s = rotate(s);
            if(s == goal){
                return true;
            }
        }
        return false;
    }
};
