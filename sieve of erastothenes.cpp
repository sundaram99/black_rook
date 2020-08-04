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
}
