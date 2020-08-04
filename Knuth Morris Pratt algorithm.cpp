#include<bits/stdc++.h>
using namespace std;
int main()
{
    string txt;
    cin>>txt;
    string pat;
    cin>>pat;
    int arr[pat.length()];
    arr[0]=0;
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
    }
    for(int i=0;i<pat.length();i++)
        cout<<arr[i]<<"  ";
    cout<<endl;
    int pos=0;
    int maxi=0;
    for(int i=0;i<txt.length();i++)
    {
        if(pat[pos]==txt[i])
        {
            pos++;
            maxi=max(maxi,pos);
        }
        else
        {
            if(pos>0)
                i--;
            pos=arr[pos];
        }
        if(pos==pat.length())
        {
            cout<<" hey "<<" i is "<<i<<" txt[i] is "<<txt[i]<<endl;
            cout<<" found at index "<<(i-pat.length()+1)<<endl;
            pos=arr[pos-1];
        }
    }
}
