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

bool issafe(int i,int j,int n)
{
    if(i<n && j<n)
        return true;
    return false;
}
int ratmaze(int arr[][100],int sol[][100],int i,int j,int n)
{
    int min_t = INT_MAX;
    //base 1:
    if(i==n-1 && j== n-1){
        sol[i][j] =  1;
        return 0;
        
    }
    if(issafe(i,j,n) && arr[i][j] != 0)
    {
        sol[i][j] = 1;
        
        for(int a=1;a<=arr[i][j];a++)
        {
            int tmp1 = ratmaze(arr,sol,i+a,j,n);
            if( tmp1 != INT_MAX)
                min_t = min(min_t,tmp1);
            int tmp2 = ratmaze(arr,sol,i,j+a,n);
            if(tmp2!=INT_MAX)
                min_t = min(min_t,tmp2);
        }

        if(min_t != INT_MAX)
            return 1+min_t;
        
        sol[i][j] = 0;
        
       
    }
     return INT_MAX;
}

int main()
{

    #ifndef ONLINE_JUDGE
     freopen("input.txt","r",stdin);
     freopen("output.txt","w",stdout);
    #endif

    int num;
    cin>>num;

    int arr[100][100],sol[100][100];
    for(int i=0;i<num;i++)
    {
        for(int j=0;j<num;j++)
        {
            cin>>arr[i][j];
        }
    }
    int ans = ratmaze(arr,sol,0,0,num);
    if(ans != INT_MAX){
        for(int i=0;i<num;i++)
        {
            for(int j=0;j<num;j++)
            {
                cout<<sol[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    cout<<((ans!= INT_MAX)?ans:-1)<<endl;

    return 0;
}