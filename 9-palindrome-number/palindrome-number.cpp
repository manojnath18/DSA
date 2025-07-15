class Solution {
public:
    int reverseNum(int n) {
        int revNum = 0;
        while(n != 0) {
            int num = n % 10;
            if(revNum > INT_MAX/10 || revNum < INT_MIN/10) {
                return 0;
            }
            revNum = (revNum * 10) + num;
            n /= 10;
        }
        return revNum;
    }

    bool isPalindrome(int x) {
        if( x < 0) return false;
        if(reverseNum(x) == x) {
            return true;
        } else {
            return false;
        } 
    }
};