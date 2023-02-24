class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int,int> mpp;
        
        while(n != 1)
        {
            if(mpp[n] == 0)
                mpp[n]++;
            else
                return false;
            
            int sum = 0;
            while(n != 0)
            {
                int z=n%10;
                sum += pow(z,2);
                n = n / 10;
            }
            
            n = sum;
        }
        
        return true;
    }
};