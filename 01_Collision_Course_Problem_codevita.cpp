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

float pyth(int a,int b)
{
    return ((float)sqrt(pow(a,2)+pow(b,2)));
} 

int main()
{

    #ifndef ONLINE_JUDGE
     freopen("input.txt","r",stdin);
     freopen("output.txt","w",stdout);
    #endif

    int n;
    vi v1,v2,v3;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int n1,n2,n3;
        cin>>n1>>n2>>n3;
        v1.pb(n1);
        v2.pb(n2);
        v3.pb(n3);
    }
  
    vector<float> sp;

    for(int i=0;i<n;i++)
    {
        float num = pyth(abs(v1[i]),abs(v2[i]));
       
        sp.pb(num/v3[i]);
    }

    int count = 0;
    set<float> s;
    
    for(int i=0;i<n;i++)
    {
        if(s.find(sp[i]) == s.end())
        {
            s.insert(sp[i]);
            int tmp = 1;
            for(int j=i+1;j<n;j++)
            {
                if(sp[i] == sp[j])
                {
                    count+=tmp;
                    tmp++;
                   
                }

                
            }
        }
    }
    // for(float d:s)
    //     cout<<d<<" ";

    // mii m;
    
    // for(int i:sp)
    //     m[i]++;

    // for(auto i :m){
    //     if(i.second >1){
    //         count++;
    //     }
    // }
    
    cout<<count;
    return 0;
}