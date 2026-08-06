class Solution {
public:
    int smallestNumber(int n, int t) {
       while(true){
            int temp = n;
            int prd = 1;
            while(temp != 0){
                int rem = temp % 10;
                prd *= rem;
                temp /= 10;
            }
            if(prd % t == 0)
                return n;

            n++;
        }
    }
};