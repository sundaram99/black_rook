#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int val[n+1];
    val[0]=0;
    int maxi=0;
    for(int i=1;i<=n;i++)
    {
        maxi=0;
        for(int j=0;j<i;j++)
        {
            maxi=max(maxi,(a[j]+val[i-j-1]));
        }
        val[i]=maxi;
    }
    cout<<val[n]<<endl;
}
