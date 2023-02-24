class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int n=points.size();
        
        int result=1;
        for(int i=0;i<n-1;i++)
        {
            map<double,int>mpp;
            for(int j=i+1;j<n;j++)
            {
                double slope=(double)(points[j][1]-points[i][1])/(double)(points[j][0]-points[i][0]);
                if(points[j][1]-points[i][1]<0&& points[j][0]-points[i][0]==0)
                mpp[abs(slope)]++;
                else
                mpp[slope]++;
            }
            int temp=0;
            for(auto it:mpp)
             temp=max(temp,it.second+1);
             result=max(temp,result);
            
        }
        return result;
    }

        
    
};