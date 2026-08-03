class Solution {
  public:
    vector<int> nextGreater(vector<int> &arr) {
        // code here
        int n=arr.size();
        vector<int> res(n,-1);
        stack<int>s;
        for(int i=0;i<2*n;i++)
        {
            int idx=i%n;
            int num=arr[idx];
            while(!s.empty() && num>arr[s.top()])
            {
                res[s.top()]=num;
                s.pop();
            }
            if(i<n)
            {
                s.push(idx);
            }
        }
        return (res);
        
        
    }
};