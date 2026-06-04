class Solution {
public:
    bool detectCapitalUse(string word) {
        if (word.size() <= 1) return true;
        if (((int)word[0]) >= 97 && ((int)word[0]) <= 122) {
            for (int i = 1; i < word.size(); i++) {
                if (((int)word[i]) < 97 || ((int)word[i]) > 122) {
                    return false;
                }
            }
        } 
        else {
            if (((int)word[1]) >= 97 && ((int)word[1]) <= 122) {
                for (int j = 2; j < word.size(); j++) {
                    if (((int)word[j]) < 97 || ((int)word[j]) > 122) {
                        return false;
                    }
                }
            }
            else{
                for (int k = 2; k < word.size(); k++) {
                    if (((int)word[k]) >= 97 && ((int)word[k]) <= 122) {
                        return false;
                    }
                }
            }

        }
        return true;
    }
};
