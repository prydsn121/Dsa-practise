class Solution {

public:
void helper(int oc,int cc,vector<string>&v, int n,string s)
{
    if(oc==n&&cc==n)
    {
        v.push_back(s);
        return;
    }
    if(oc<n)
    {
        helper(oc+1,cc,v,n,s+"(");
    }
    if(cc<oc)
    {
        helper(oc,cc+1,v,n,s+")");
    }

}
    vector<string> generateParenthesis(int n) {
        int oc=0;
        int cc=0;
        vector<string>v;
        helper(oc,cc,v,n,"");
        return v;


        
    }
};