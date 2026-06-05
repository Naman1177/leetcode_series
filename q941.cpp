class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n = arr.size();
        if(n<3){return false;}
        int max =0;
        int index = 0;
        for(int i =0;i<n;i++){
            if(arr[i]>max){
                max = arr[i];
                index = i;
            }
        }
        if (index == 0 || index == n - 1) {
            return false;
        }
        for(int j =0;j<index;j++){
            if(arr[j]>=arr[j+1]){
                return false;
            }
        }
        for(int k = index;k<n-1;k++){
            if(arr[k]<=arr[k+1]){
                return false;
            }
        }
        return true;
    }
};
