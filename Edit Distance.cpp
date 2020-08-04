#include<bits/stdc++.h>
using namespace std;
#define int long long
#define st_cou_fi std::cout<<std::fixed;
#define st_cou_pre std::cout<<std::setprecision(8);
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int xy=1;xy<=t;xy++)
    {
        int p,q;
        cin>>p>>q;
        string str1;
        cin>>str1;
        string str2;
        cin>>str2;
        int dp[p+1][q+1];
        for(int i=0;i<=p;i++)
        {
            for(int j=0;j<=q;j++)
            {
                if(i==0)
                    dp[i][j]=j;
                else if(j==0)
                    dp[i][j]=i;
                else if(str1[i-1]==str2[j-1])
                {
                    dp[i][j]=dp[i-1][j-1];
                }
                else
                {
                    int mini=(min(dp[i-1][j],dp[i][j-1]));
                    mini=min(mini,dp[i-1][j-1]);
                    dp[i][j]=1+mini;
                }
                //cout<<" for i "<<i<<" for j "<<j<<" "<<dp[i][j]<<endl;
            }
        }
        cout<<dp[p][q]<<endl;
    }
}
