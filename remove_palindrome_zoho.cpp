#include <bits/stdc++.h>
using namespace std;
#define pb(x) push_back(x)
#define pf(x) push_front(x)
#define pob(x) pop_back(x)
#define vclr(v) v.clear()
#define sii(x) insert(x)
#define ai(x) int arr[x]
#define vi vector<int>
#define mii map<int,int>
#define mci map<char,int>
#define si set<int>
#define li list<int>
#define lc list<char>
#define vout(v) for(auto i=v.begin(); i!=v.end(); i++){cout<<*i<<" ";}
#define arrout(arr,n) for(int i=0;i<n;i++){cout<<arr[i]<<" ";}
#define arrin(arr,n) for(int i=0;i<n;i++){cin>>arr[i];} 
#define acc(v) accumulate(v.begin(),v.end(),0)
#define vb begin()
#define ve end()
#define c(x) cout<<x
#define sn(x) scanf("%d",&x)
#define fr(i,x) for(int i=0;i<x;i++)

bool isPlaindrome(string s)
{
    if(s.length() == 1)
        return false;
    int len = s.length();
    for(int i=0,j=len-1;j>i;i++,j--)
    {
        if(s[i]<97){
            s[i] = s[i]+32;
        }
        if(s[i] != s[j])
            return false;
    }
    return true;
}

int main()
{

    #ifndef ONLINE_JUDGE
     freopen("input.txt","r",stdin);
     freopen("output.txt","w",stdout);
    #endif

    string s;
    vector<string> v;
    while(cin>>s)
        v.push_back(s);
    
    for(int i=0;i<v.size();i++)
    {
        if(!isPlaindrome(v[i]))
            cout<<v[i]<<" ";
    }

    return 0;
}