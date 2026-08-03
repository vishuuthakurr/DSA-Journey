class Solution {
  public:
    // Function to remove duplicates from the given array.
    vector<int> removeDuplicates(vector<int> &arr) {
        // code here
        vector<int>ter;
        int temp=arr[0];
       for(int i=0;i<arr.size();i++)
       {
           
           if(temp==arr[i+1])
           {
               arr[i+1]=0;
           }
           else 
           temp=arr[i+1];
       }
       for(int i=0;i<arr.size();i++)
       {
           if(arr[i]!=0)
            ter.push_back(arr[i]);
       }
       return ter;
    }
};