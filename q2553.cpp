class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> answer;
        for(int i=0;i<size(nums);i++){
            string str = to_string(nums[i]);
            for (int j=0; j<str.length();j++){
                answer.emplace_back(str[j]-'0');
            }
        }
        return answer;
    }
};
