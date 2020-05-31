/*
Problem Given a Array, Pick two positive integers and add them, place it in place of a if 2*a>b and vice versa
find the total number of combinations

Platform: HackWithInfy

i/p: 1 3 4

o/p: 2

*/
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

bool isOk(vi v)
{
    int flag =0;

    for(auto it = v.begin();it!=v.end();it++)
    {
        if((*it)>-1)
            flag++;
    }

    return flag==1;
}
int count_comb(vi v)
{
    static set<vector<int>> s;

    if(isOk(v))
        return 1;
    if(s.find(v)==s.end())
        s.insert(v);
    else
        return 0;


    int n1=-1,n2=-1,sum=0,id1,id2,res=0;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]>-1)
        {
            if(n1==-1)
            {
                n1=v[i];
                id1=i;
            }
            else if(n2==-1)
            {
                n2=v[i];
                id2=i;
            }
        }
    }

    sum = n1+n2;
    if((2*n1)>n2)
    {
        v[id1]=sum;
        v[id2]=-1;
        res += count_comb(v);
        cout<<count_comb(v)<<endl;
        v[id1]=n1;
        v[id2]=n2;
    }
    if((2*n2)>n1)
    {
        v[id2]=sum;
        v[id1]=-1;
        res += count_comb(v);
        v[id1]=n1;
        v[id2]=n2;
    }

    //printf("Hello");
    return res;
    
}

int main()
{

    #ifndef ONLINE_JUDGE
     freopen("input.txt","r",stdin);
     freopen("output.txt","w",stdout);
    #endif

    vi v;
    int num;
    sn(num);

    for(int i=0;i<num;i++)
    {
        int temp;
        sn(temp);
        v.pb(temp);
    }
    //cout<<"Here";
    cout<<count_comb(v);

    return 0;
}