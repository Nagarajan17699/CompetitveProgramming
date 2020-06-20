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



int main()
{

    #ifndef ONLINE_JUDGE
     freopen("input.txt","r",stdin);
     freopen("output.txt","w",stdout);
    #endif

    int n1,n2;
    cin>>n1>>n2;
    vi v(n1);
    vector<pair<int,int>> vp;
    vi v2[1000];

     for(int i=0;i<n1;i++)
    {
        int tmp;
        cin>>tmp;
        v.pb(tmp);

    }

    int t = n2;
    while(t--)
    {
        int p1,p2;
        cin>>p1>>p2;
        vp.push_back({p1,p2});
    }

   

    for(int i:v)
    {
        for(int j=0;j<n2;j++)
        {
            if(i >= vp[j].first && i<=vp[j].second)
            {
                v2[j].pb(i);
               // cout<< vp[j].first<<" "<<vp[j].second<<endl;
            }
        }
    }
       // vout(v2[0]);
    for(int i=0;i<n2;i++)
    {
        cout<<v2[i].size()<<" ";
    }
    return 0;
}