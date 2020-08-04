#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int xy=1;xy<=t;xy++)
    {
        int m,n;
        cin>>m>>n;
        int a[m],b[n];
        for(int i=0;i<m;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
            cin>>b[i];
        int num=m+n-1;
        int arr[m+n-1];
        for(int i=0;i<num;i++)
            arr[i]=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                int prod=a[i]*b[j];
                arr[i+j]=arr[i+j]+prod;
            }
        }
        for(int i=0;i<num;i++)
            cout<<arr[i]<<" ";
        cout<<endl;
    }
}
