#include<bits/stdc++.h>
using namespace std;
vector<int> zfunction(string s)
{
    int n = (int)s.length();
    cout<<s<<endl;
    vector<int> z(n);
    int l=0,r=0;
    for(int i=1;i<n;i++)
    {
        if(i<=r)
            z[i] = min(r-i+1,z[i-l]);
        while(i+z[i] < n && s[z[i]] == s[i+z[i]])
            z[i]++;
        if(r< i+z[i]-1)
        {
            l=i;
            r=i+z[i]-1;
        }
    }
    return z;
}
int main()
{

    #ifndef ONLINE_JUDGE
     freopen("input.txt","r",stdin);
     freopen("output.txt","w",stdout);
    #endif

    string str,pat;
    cin>>pat>>str;
    string res = pat+"$"+str;
    vector<int> v = zfunction(res);
    int ln = pat.length();
    for(auto i=v.begin();i!=v.end();i++)
    {
        if(ln == (*i)){
            cout<<(i-v.begin()-(pat.length()+1))<<endl;
            break;
        }
        // else
        // {
        //     cout<<(*i);
        // }
        
    }
}