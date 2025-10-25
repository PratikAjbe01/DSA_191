class Solution {
public:
    double myPow(double x, int n) {
      if (n==0) return 1.0;

  if (n<0) return (double)1.0/x * myPow((double)1.0/x, -(++n));
 if  (n%2==0) return myPow(x*x,n/2);
else return x*myPow(x,n-1);
    }
};