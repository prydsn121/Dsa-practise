#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long n;
        cin>>n;
         
        long long positive=0;
    long long negative=0;
    long long  count=0;
           
        long long *arr=new int[n];
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
        }
        for(int i=1;i<=n;i++)
        {
            if(arr[i]>0)
            {
                count=count+positive;
                positive++;
            }
            else if(arr[i]<0)
            {
                count=count+negative;
                negative++;
            }
        }
        
       
       cout<<count<<endl;
        
      /* cout<<positive<<" "<<negative<<endl;*/
    }
    return 0;
}
