class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int sum=0,ans=0;
        mp[sum]=1;
        for(auto it:nums){
            sum+=it;
            int sub=sum-k;
            if(mp.find(sub)!=mp.end())
            {
                ans+=mp[sub];
            }
            mp[sum]++;
        }
        return ans;
        
    }
};