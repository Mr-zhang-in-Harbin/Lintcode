class Solution {
public:
    /*
     * @param A: an integer array
     * @return: 
     */
    void sortIntegers(vector<int> &A) {
        // write your code here
        int n = A.end()-A.begin();
        for (int i = 0 ;i < n ;i++ )
            for (int j = 1;j < n;j++)
            {
                if (A[j-1]>A[j])
                {
                    int temp=A[j];
                    A[j]=A[j-1];
                    A[j-1]=temp;
                }
            }
    }
};
