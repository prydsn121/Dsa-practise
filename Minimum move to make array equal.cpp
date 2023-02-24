class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n=nums.size();
        int minimum=*min_element(nums.begin(),nums.end());
        int total_diff=0;
        for(int i=0;i<n;i++){
            total_diff+=nums[i]-minimum;
        }
        return total_diff;
        
    }
};