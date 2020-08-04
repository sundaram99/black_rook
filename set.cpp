#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    set<int>::iterator it;
    s.insert(11);
    s.insert(2);
    s.insert(41);
    s.insert(9);
    s.insert(7);
    for(it=s.begin();it!=s.end();it++)
        cout<<*it<<endl;
    for(it=s.begin();it!=s.end();it++)
        {
            int as=*it;
            cout<<as<<endl;
        }
    return 0;
}
