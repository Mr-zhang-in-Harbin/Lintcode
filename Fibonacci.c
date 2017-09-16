class Solution {
public:
    /*
     * @param n: an integer
     * @return: an ineger f(n)
     */
    int fibonacci(int n) {
        // write your code here
        int num[100];
        num[0]=0;
        num[1]=1;
        for (int i=2;i<n;i++)
            num[i]=num[i-1]+num[i-2];
        return num[n-1];
    }
}; 
