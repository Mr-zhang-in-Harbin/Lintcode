class Solution {
public:
    /**
     * @param n: An integer
     * @return: An integer
     */
    int climbStairs(int n) {
        // write your code here
        int *step=new int [n];
        step[0]=1;
        step[1]=2;
        for (int i=2;i<n;i++)
            step[i]=step[i-1]+step[i-2];
        return step[n-1];
    }
};

