class Solution {
public:

    void fun(vector<int> &num, vector<vector<int>> &res, vector<int> &answer, int i)
    {
        if(i == num.size()){
            res.push_back(answer);
            return;
        }
        answer.push_back(num[i]);
        fun(num, res, answer, i + 1);
        answer.pop_back();
        fun(num, res, answer, i + 1);
    }
    vector<vector<int>> subsets(vector<int>& nums){
        vector<vector<int>> res;
        vector<int> ans;
        fun(nums, res, ans, 0);
        return res;
    }
};