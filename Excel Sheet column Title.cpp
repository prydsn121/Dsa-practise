class Solution {
public:
    string convertToTitle(int A) {
        string s;
        while(A>0)
        {
            A--;
            int n=A%26;
              A/=26;
            s+='A'+n;
        }
        reverse(s.begin(),s.end());
        return s;
    }
};