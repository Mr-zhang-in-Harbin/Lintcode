class Solution {
public:
    /**
     * @param A an integer array sorted in ascending order
     * @param target an integer
     * @return an integer
     */
     
     /*
      int find(vector<int>& A,int star,int end, int target){
        if (target>A[end]||target<A[star])
            return -1;
        if (A[star]==target)
            return star;
        if (A[end]==target)
            return end;
        if (end-star<=1)
            return -1;
        int midle=(end-star)/2;
        if (target<=A[midle])
            return find(A,star,midle,target);
        else return find(A,midle+1,end,target);
     }
    int findPosition(vector<int>& A, int target) {
        // Write your code here
        int n=A.end()-A.begin()-1;
        if (n<0)
            return -1;
        return find(A,0,n,target);
    }
     */
     //���ֲ���ʵ���㷨���ܲ���,�޷�ͨ������,����������ͨ��,��δ�ҵ�ԭ�� 
    int findPosition(vector<int>& A, int target) {
        // Write your code here
        int n=A.end()-A.begin();
        if (n<=1)
            return -1;
       for (int i=0;i<n;i++)
        {
            if (A[i]==target)
                return i;
        }
        return -1;
    }
};
