class Solution {
public:
    char findTheDifference(string s, string t) {
         int hashs[26]={0};
         int hasht[26]={0};
         for(int i = 0;i<s.size();i++){
            hashs[int(s[i])-97] = hashs[int(s[i])-97]+1;
         }
         for(int j = 0;j<t.size();j++){
            hasht[int(t[j])-97] = hasht[int(t[j])-97]+1;
         }
         for(int k=0;k<26;k++){
            if(hashs[k]!=hasht[k]){
                return (char)(k+97);
            }
         }
         return ' ';
    }
};
