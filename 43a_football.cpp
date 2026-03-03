#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<string> team(n);
    for(int i=0;i<n;i++)
    {
        cin>>team[i];
    }
    unordered_map<string,int> mp;
    for(int i=0;i<n;i++)    {
        mp[team[i]]++;
    }
    string ans="";
    int maxi=0;
    for(auto it:mp)
    {
        if(it.second>maxi)
        {
            maxi=it.second;
            ans=it.first;
        }
    }
    cout<<ans<<endl;
}