#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n;
        cin>>n;
        int a[n];
        for(int j=0;j<n;j++)
            cin>>a[j];
        vector<int> v1;
        int j;
        int flag=0;
        int pos=0;
        for(j=(n-1);j>0;j--)
        {
            if(a[j]<=a[j-1])
                {
                    v1.push_back(a[j]);
                    continue;
                }
            else
            {
                flag=1;
                v1.push_back(a[j]);
                v1.push_back(a[j-1]);
                sort(v1.begin(),v1.end());
                for(pos=0;pos<v1.size();pos++)
                {
                    if(v1[pos]>a[j-1])
                        break;
                }
                break;
            }
        }
            if(flag==0)
            {
                for(int l=n-1;l>=0;l--)
                    cout<<a[l]<<" ";
            }
            else
            {

                for(int l=0;l<=(j-2);l++)
                    cout<<a[l]<<" ";
                cout<<v1[pos]<<" ";
                for(int l=0;l<v1.size();l++)
                {
                    if(l!=pos)
                        cout<<v1[l]<<" ";
                }
            }
            cout<<endl;
    }
}
