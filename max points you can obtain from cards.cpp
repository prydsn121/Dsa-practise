class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int sum=0;
        for(int i=0;i<k;i++)
        {
            sum+=cardPoints[i];
        }
        int i=0;
        int len=cardPoints.size();
        int max_sum=sum;
        while(i<k)
        {
           sum=sum -cardPoints[k-i-1]+cardPoints[len-1-i];
            max_sum=max(max_sum,sum);
            i++;
        }
        return max_sum;
        
            }
};