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

bool isperfect(vector<int> v)
{
    int sum=0;
    for(auto i = v.begin(); i!=v.end();i++)
    {
        sum += (*i);
    }

    long double pft = sqrt(sum);
   // cout<<pft - floor(pft)<<endl;
    return (pft - floor(pft)==0);
}

void perfsubarr(vector<int> v,vector<int> q,int ind,int* count,map<vector<int>,int> m,set<map<vector<int>,int>> s) 
{
    

    if(v.size() > 0)
    {
        if(isperfect(v) && (s.find(m) == s.end()))
        {
            (*count)++;
            //vout(v);
            s.insert(m);
        }

    }

    if(ind == q.size())
        return;

    int tmpsum = m[v];
    v.pb(q[ind]);

    m.insert({v,tmpsum+ind});

    perfsubarr(v,q,ind+1,count,m,s);
    v.pop_back();
    perfsubarr(v,q,ind+1,count,m,s);

}


int main()
{

    #ifndef ONLINE_JUDGE
     freopen("input.txt","r",stdin);
     freopen("output.txt","w",stdout);
    #endif

    int t;
    sn(t);

    while(t--)
    {
        int num,temp,count=0;
        sn(num);
        map<vector<int>,int> m;
        set<map<vector<int>,int>> s;
       
        vi q,v;
        fr(i,num)
        {
            cin>>temp;
            q.pb(temp);
        }
        m.insert({v,0});
        perfsubarr(v,q,0, &count,m,s);
        cout<<count<<endl;
    }

    

    return 0;
}