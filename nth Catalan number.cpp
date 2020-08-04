#include<bits/stdc++.h>
using namespace std;
#define int unsigned long long
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
vector<int> v1;
int catalan(int n,int num)
{
    int res=0;
    for( int i = 0 ; i < v1.size() ; i++ )
        {
            res = res + v1[i]*v1[num-i];
        }
        v1.push_back(res);
        //cout<<" res is "<<res<<endl;
        num++;
        if(num == n)
            {
               return(res);
            }
        else
        {
            return(catalan(n,num));
        }
}
int32_t main()
{
    IOS;
    v1.push_back(1);
    int t;
    cin>>t;
        int a[t];
        int maxi=0;
        for(int xy=1;xy<=t;xy++)
            {
                cin>>a[xy-1];
                maxi=max(maxi,a[xy-1]);
            }
        int ans=catalan(maxi,0);
        for(int xy=1;xy<=t;xy++)
        {
            cout<<v1[a[xy-1]]<<endl;
        }
}
