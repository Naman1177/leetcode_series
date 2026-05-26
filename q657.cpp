class Solution {
public:
    bool judgeCircle(string moves) {
        unordered_map<char,int> mpp;
        for (int i = 0;i<moves.size();i++){
            mpp[moves[i]]=mpp[moves[i]]+1;
        }
        if(mpp['L']==mpp['R']){
            if(mpp['U']==mpp['D']){
                return true;
            }
        }
        return false;
    }
};
