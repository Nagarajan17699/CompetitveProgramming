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

int findLeft(int arr[],int num,int size,int l,int r)
{
    int mid = l+(r-l)/2;
    if(arr[mid] == num)
    {
        if(arr[mid-1] == num)
           return findLeft(arr,num,size,l,mid-1);
        else
            return mid;
    }
    if(arr[mid] < num)
      return findLeft(arr,num,size,mid+1,r);
    else
        return findLeft(arr,num,size,l,mid-1);
    
    return -1;
}
int findRight(int arr[],int num,int size,int l,int r)
{
    int mid = l+(r-l)/2;
    if(arr[mid] == num)
    {
        if(arr[mid+1] == num)
           return findRight(arr,num,size,mid+1,r);
        else
            return mid;
    }
    if(arr[mid] < num)
      return findRight(arr,num,size,mid+1,r);
    else
        return findRight(arr,num,size,l,mid-1);
    
    return -1;
}

int main()
{

    #ifndef ONLINE_JUDGE
     freopen("input.txt","r",stdin);
     freopen("output.txt","w",stdout);
    #endif

    int arr[]={1,2,3,4,4,4,4,4,4,5};
    int lf = findLeft(arr,6,10,0,9);
    int rf = findRight(arr,6,10,0,9);
    cout<<(rf-lf+1);

   // cout<<lf;

    return 0;
}
