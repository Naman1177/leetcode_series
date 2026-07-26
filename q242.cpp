class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!= t.size()){return false;}
        int s1[26] = {0};
        int t1[26] = {0};
        for(int i = 0;i<s.size();i++){
            s1[int(s[i])-97] = s1[int(s[i])-97]+1;
        }
        for(int j = 0;j<t.size();j++){
            t1[int(t[j])-97] = t1[int(t[j])-97]+1;
        }
        for(int z=0;z<26;z++){
            if(s1[z]!=t1[z]){
                return false;
            }
        }
        return true;
    }
};
