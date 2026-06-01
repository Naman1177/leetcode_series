class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int hash1[26] = {0};
        int hash2[26] = {0};
        for(int i = 0; i< ransomNote.size();i++){
            hash1[((int)ransomNote[i])-97] = hash1[((int)ransomNote[i])-97]+1;
        }
        for(int j = 0; j< magazine.size();j++){
            hash2[((int)magazine[j])-97] = hash2[((int)magazine[j])-97]+1;
        }
        for(int k = 0;k<26;k++){
            if(hash1[k]>hash2[k]){
                return false;
            }
        }
        return true;
    }
};
