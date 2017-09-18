class Solution {
public:
    /*
     * @param num: a non-negative integer
     * @return: one digit
     */
    int addDigits(int num) {
        // write your code here
        return add(num);
    }
    int add(int num){
        int temp=0;
        while (num)
        {
            temp+=num%10;
            num/=10;
        }
        if (temp<10)
            return temp;
        else return add(temp);
    }
};
