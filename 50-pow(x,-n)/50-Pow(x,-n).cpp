class Solution {
public:
    double myPow(double x, int n) {
        if(x==0) return 0.0;
        if(n==0) return 1.0;
        if(x==-1 && n%2 == 0) return 1.0;
             long binaryFrom=n;
        if(n<0){
            x =1/x;
            binaryFrom=-binaryFrom;
        }
        double ans = 1;
        while(binaryFrom>0){
            if(binaryFrom%2==1){
ans*=x;
            }
         x*=x;
binaryFrom/=2;
        }
        return ans;
    }
};