#include<bits/stdc++.h>
using namespace std;
int main()
{
    string txt;
    cin>>txt;
    string pat;
    cin>>pat;
    int hash=0;
    for(int i=0;i<pat.length();i++)
    {
        hash=hash+(pat[i]-64)*pow(3,i);
    }
    int val=0;
    for(int i=0;i<pat.length();i++)
    {
        val=val+(txt[i]-64)*pow(3,i);
    }
    if(val==hash)
        cout<<" found at index 0\n";
    for(int j=pat.length();j<txt.length();j++)
    {
        val=val-(int)(txt[j-pat.length()]-64);
        val=val/3;
        val=val+((int)(txt[j]-64)*pow(3,(pat.length()-1)));
        if(val==hash)
            cout<<"found at index "<<(j-pat.length()+1)<<endl;
    }
}
