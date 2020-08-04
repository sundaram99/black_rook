#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100001];
    for(int i=1;i<=100000;i++)
        arr[i]=0;
    for(int i=2;i<=100000;i++)
    {
        if(arr[i]==0)
        {
            for(int j=2;((j*i)<=100000);j++)
            {
                arr[j*i]=1;
            }
        }
    }
    int n,m;
    cin>>m>>n;
    int sum[n+1];
    for(int k=0;k<=n;k++)
        sum[k]=0;
    for(int i=2;i<=n;i++)
    {
        if(arr[i]==0)
        {
            int p=(m/i);
            int fac=max(i,(p*i));
            while(fac<=n)
            {
                if(fac>=m)
                {
                    sum[fac]++;
                }
                fac=fac+i;
            }
        }
    }
    int maxi=INT_MIN;
    int num=0;
    for(int i=m;i<=n;i++)
    {
        if(sum[i]>maxi)
        {
            num = i;
            maxi = sum[i];
        }
    }
    cout<<num<<endl;
}
