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

bool issafe(int i,int j, int n){
    if(i<n && j<n)  
        return true;
    return false;
}
bool ratmaze(int arr[][100],int sol[][100],int i,int j,int n)
{
    if(i==n-1 && j== n-1){
        sol[i][j] = 1;
        return true;
    }

    if(issafe(i,j,n) && sol[i][j] == 0 && arr[i][j] == 1)
    {
        sol[i][j] = 1;

        if(ratmaze(arr,sol,i+1,j,n))
            return true;
        else if(ratmaze(arr,sol,i,j+1,n))
            return true;
   
    }
    sol[i][j] = 0;
    return false;

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

    if(ratmaze(arr,sol,0,0,num)){
        for(int i=0;i<num;i++)
        {
            for(int j=0;j<num;j++)
            {
                cout<<sol[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}