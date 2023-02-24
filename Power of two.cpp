class Solution {
public:
    bool isPowerOfTwo(int n) {
        double p=log10(n)/log10(2);
        if(n<=0)return false;
        if(p-(int)p==0)
        return true;
        else
        return false;
        
    }
};