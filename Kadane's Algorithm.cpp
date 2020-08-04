#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    int t;
    cin>>t;
    for(int xy=1;xy<=t;xy++)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        int sum[n];
        sum[0]=a[0];
        int maxi=sum[0];
        for(int i=1;i<n;i++)
        {
            if(sum[i-1]>0)
                sum[i]=a[i]+sum[i-1];
            else
                sum[i]=a[i];
            maxi=max(maxi,sum[i]);
        }
        cout<<maxi<<endl;
    }
}
