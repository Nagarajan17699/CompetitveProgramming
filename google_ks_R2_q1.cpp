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

bool iscount(vi v,int k,int i)
{
    i++;k--;
    for(int j=i;(k!=0);j++)
    {
        if(v[j] != k)
            return false;
        else
        {
            k--;
        }
        
    }
    return true;
}

int main()
{

    #ifndef ONLINE_JUDGE
     freopen("input.txt","r",stdin);
     freopen("output.txt","w",stdout);
    #endif

    int t,casei=0;
    sn(t);

    while(t--)
    {
        casei++;
        int size,k,tmp,count=0;
        sn(size);sn(k);

        vi v;
        fr(i,size)
        {
            cin>>tmp;
            v.pb(tmp);

        }

        fr(i,size)
        {
            if(v[i]==k)
            {
                if(iscount(v,k,i))
                {
                    count++;
                   if(i+(k-1)<=size)
                   {
                       i+=(k-1);
                   }
                }   
            }
        }

    cout<<"Case "<<"#"<<casei<<": "<<count<<endl;

    }

    

    return 0;
}