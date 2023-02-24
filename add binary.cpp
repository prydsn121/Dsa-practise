class Solution {
public:
    string addBinary(string a, string b) {
        int n=a.length()-1;
        int m=b.length()-1;
        int carry=0;
        string result;
        while(n>=0||m>=0){
            int sum=carry;
            if(n>=0)sum+=a[n]-'0';
            n--;
            if(m>=0)sum+=b[m]-'0';
            m--;
            carry=sum>1?1:0;
            result+=to_string(sum%2);
        }
        if(carry!=0) result+=to_string(carry);
        reverse(result.begin(),result.end());
        return result;
        
    }
};