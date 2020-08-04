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
        int n;
        cin>>n;
        int cost[n][n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                cin>>cost[i][j];
        }
        int tot[n][n];
        for(int i=0;i<n;i++)
            tot[0][i]=cost[0][i];
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(j==0)
                    tot[i][j]=cost[i][j]+max(tot[i-1][j],tot[i-1][j+1]);
                else if(j!=(n-1))
                    tot[i][j]=cost[i][j]+max(max(tot[i-1][j-1],tot[i-1][j]),tot[i-1][j+1]);
                else
                    tot[i][j]=cost[i][j]+max(tot[i-1][j-1],tot[i-1][j]);
                //cout<<tot[i][j]<<endl;
            }
        }
        int maxi=0;
        for(int j=0;j<n;j++)
        {
            maxi=max(maxi,tot[n-1][j]);
        }
        cout<<maxi<<endl;
    }
}
