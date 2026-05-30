class Solution {
public:
    vector<vector<int>> rotation(vector<vector<int>>& input){
        for(int i = 0;i<input.size();i++){
            for(int j = i+1;j<input.size();j++){
                swap(input[i][j],input[j][i]);
            }
        }
        for(int i = 0;i<input.size();i++){
            reverse(input[i].begin(),input[i].end());
        }
        return input;
    }
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        for(int z = 0;z<4;z++){
            vector<vector<int>> comp =  rotation(mat);
            if(comp == target){
                return true;
                break;
            }

        }
        return false;
    }
};
