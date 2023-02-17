class Solution {
public:
    public: bool checkPow(int n,long long int i=1){
        if( i == n){
            return 1;
        }
        if( i > n){
            return 0;
        }

        return checkPow(n,i*2);
    }
    bool isPowerOfTwo(int n) {
        return checkPow(n);
    }
};