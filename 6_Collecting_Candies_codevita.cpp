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

    int t;
    cin>>t;
    while(t--)
    { 
        int num;
        cin>>num;
        
    priority_queue<int,vector<int>,greater<int>> pq;
        for(int i=0;i<num;i++)
        {
            int mp;
            cin>>mp;
            pq.push(mp);
        }

        int sum =0;
        int t_sum,tmp1,tmp2;
        while(pq.size() != 1)
        {
            tmp1 = pq.top();
            pq.pop();
            tmp2 = pq.top();
            pq.pop();

            
            t_sum = tmp1+tmp2;
            pq.push(t_sum);
            cout<<tmp1<<" "<<tmp2<<" "<<t_sum<<" "<<endl;
            sum += t_sum;
            t_sum=0;  
        }
        
        cout<<sum;
    }

    return 0;
}