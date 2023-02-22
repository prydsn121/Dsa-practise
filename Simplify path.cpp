class Solution {
    string simplify(string s){
        stack<string>st;
        string dir;
        string res;
        res.append("/");
        int lengtha=s.length();
        for(int i=0;i<lengtha;i++)
        {
            dir.clear();
            while(s[i]=='/')
            {
                i++;
            }
            while(i<lengtha&&s[i]!='/'){
                dir.push_back(s[i]);
                i++;
            }
            if(dir.compare("..")==0)
            {
                if(!st.empty())
                st.pop();
            }
            else if(dir.compare(".")==0)
            continue;
            else if(dir.length()!=0)
            st.push(dir);
        }
        stack<string>st1;
        while(!st.empty()){
            st1.push(st.top());
            st.pop();
        }
        while(!st1.empty()){
            string temp=st1.top();
            if(st1.size()!=1)
            res.append(temp + "/");
            else
            res.append(temp);
            st1.pop();
        }
        return res;
    }
public:
    string simplifyPath(string path) {
      string res=simplify(path);
      return res;
        
    }
};