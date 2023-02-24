class Solution {
public:
    int reverse(int x) {
       long long int b=0;
        while(x!=0)
        {
            
           long int z=x%10;
             b=10*b+z;

            x/=10;
        }
        return (b<INT_MIN||b>INT_MAX)?0:b;
    }
};