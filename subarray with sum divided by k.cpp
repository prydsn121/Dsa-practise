class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
map<int,int>mp;
        mp[0]=1;
        int curr_sum=0;
        int remainder;
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++)
        {
                curr_sum+=nums[i];
                remainder=curr_sum%k;
                if(remainder<0)remainder+=k;
                if(mp.find(remainder)!=mp.end())
                {
                    count+=mp[remainder];
                }
                mp[remainder]++;
                
        }
        return count;
        
    }
};