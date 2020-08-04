#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int> map1;
    map1.insert(pair<string,int>("Sundaram",7));
    map1.insert(pair<string,int>("Shivam",10));
    map1.insert(pair<string,int>("Satyam",2));
    map1.insert(pair<string,int>("Satyam",12));
    map1.insert(pair<string,int>("Satyam",1));
    map<string,int>::iterator mapp;
    for(mapp=map1.begin();mapp!=map1.end();mapp++)
        cout<<mapp->first<<"\t"<<mapp->second<<"\t";
}
