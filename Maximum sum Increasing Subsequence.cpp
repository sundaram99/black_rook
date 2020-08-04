#include<bits/stdc++.h>
using namespace std;
#define int long long
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
        int sum[n+1];
        for(int i=0;i<=n;i++)
            sum[i]=0;
        sum[0]=0;
        sum[1]=a[0];
        int maxi=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=(i-1);j>=0;j--)
            {
                if((j==0)||(a[j-1]<a[i-1]))
                {
                    sum[i]=max(sum[i],(a[i-1]+sum[j]));
                }
            }
            //cout<<sum[i]<<" ";
            maxi=max(maxi,sum[i]);
        }
        cout<<maxi<<endl;
    }
}
