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

    int num,key,arr[10000],res[10000];
    cin>>num>>key;
    for(int i=0;i<num;i++)
        cin>>arr[i];
    for(int i=0;i<num;i++)
    {
        if(arr[i] > 0)
        {
            for(int j=1;j<=key;j++)
            {
                res[i] += arr[(i+j)%num]; 
            }
        }
        else
        {
                                    //cout<<"Here";
            int t_num = i-key;      //cout<<t_num;
            if(t_num <0)
                t_num = num+t_num;
                
            for(int j=0;j<key;j++)
            {
                                                    //cout<<arr[(t_num+j)%num];
                res[i] += arr[(t_num+j)%num];
                                                     //cout<<arr[j]<<" ";
            }
        }
        
    }
    for(int i=0;i<num;i++)
        cout<<res[i]<<" ";

    return 0;
}