class Solution {
public:
    double binaryExp(double x,long long n){
        if(n == 0) return 1;
        if(n < 0) return 1 / binaryExp(x,-1*n);
        if(n % 2 == 1) return x * binaryExp(x*x,(n-1)/2);
        else return binaryExp(x*x,n/2);
    }
    double myPow(double x, int n) {
        return binaryExp(x,(long long) n);
    }
};