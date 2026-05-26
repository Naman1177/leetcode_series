class Solution {
public:
    int findLucky(vector<int>& arr) {
        int hash[501]={0};
        for(int i=0;i<arr.size();i++){
            hash[arr[i]]= hash[arr[i]]+1;
        }
        for(int j=500;j>=1;j--){
            if(hash[j]==j){
                return j;
            }
        }
        return -1;
    }
};
