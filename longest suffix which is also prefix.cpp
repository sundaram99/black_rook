#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int k=1;k<=t;k++)
        {
    string pat;
    cin>>pat;
    int arr[pat.length()];
    arr[0]=0;
    int maxi=0;
    int j=0;
    for(int i=1;i<pat.length();i++)
    {
        //cout<<" i is "<<i<<" j is "<<j<<endl;
        //cout<<arr[i-1]<<endl;
        j=arr[i-1];
        if(pat[i]==pat[j])
            {
                arr[i]=arr[i-1]+1;
            }
        else if(pat[i]!=pat[j])
        {
            int tem=j-1;
            while(1>0)
            {
                if(tem<0)
                {
                    arr[i]=0;
                    break;
                }
                if(tem==0)
                {
                    if(pat[i]==pat[0])
                        arr[i]=1;
                    else
                        arr[i]=0;
                    break;
                }
                if(pat[arr[tem]]==pat[i])
                {
                    arr[i]=arr[tem]+1;
                    break;
                }
                else
                {
                    tem=arr[tem]-1;
                }
            }
        }
        maxi=max(maxi,arr[i]);
    }
    cout<<arr[pat.length()-1]<<endl;
        }
}

