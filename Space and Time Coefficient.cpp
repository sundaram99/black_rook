#include<bits/stdc++.h>
using namespace std;
long long int mod=(1000000007);
int main()
{
    int t;
    cin>>t;
    for(int xy=1;xy<=t;xy++)
    {
        int n,r;
        cin>>n>>r;
        if(n<r)
            cout<<"0\n";
        else
            {
                cout<<"hey\n";
        int maxi=max((n-r),r);
        int mini=min((n-r),r);
        long long int ans=1;
        int pos=mini;
        for(int i=0;i<=(mini-1);i++)
        {
            cout<<" i is "<<i<<" ans is "<<ans<<endl;
            ans=ans*(n-i)/(i+1);
            ans=ans%mod;
        }
        cout<<ans<<endl;
            }
    }
}
