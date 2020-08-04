#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<string,int>Pair1=make_pair("ff",23);
    cout<<Pair1.first<<endl<<Pair1.second<<endl;
    pair<char,int>Pair[10];
    Pair[0].first='l';
    int t=786;
    Pair[0].second=t;
    cout<<Pair[0].second<<endl;
    pair<char,int>pp;
    pp=Pair[0];
    int s=Pair[0].second;
    cout<<s<<endl;
}
