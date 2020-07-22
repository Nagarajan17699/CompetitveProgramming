/*
Program to convert the number to excel cell name 

i/p: 705  o/p:  AAC
     1           A

     26          Z

     27          AA

     676         YZ

program:

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

char getchr(int num)
{
    if(num == 0)
        return 'Z';
    return char('A'-1+num);
}

int main()
{

    #ifndef ONLINE_JUDGE
     freopen("input.txt","r",stdin);
     freopen("output.txt","w",stdout);
    #endif

    int num;
    cin>>num;
    string s="";
    char c='a'-1;
    while(num)
    {
        int rs = num%26;
        char rc = getchr(rs);
        s+=rc;
        if(rs==0)
            rs=26;
        num = num - rs;
        num/=26;

    }

    for(auto i = s.rbegin();i!=s.rend();i++)
    {
        cout<<*i;
    }
    

    return 0;
}