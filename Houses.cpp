/*
Houses
Problem Statement
Assume we have a 100 houses and 100 thieves.Initially all houses are locked stage.All thieves are go and check every houses from their order.

Example 1st theif come ,he will check 1,2,3,4,......upto 100 th house.If house was locked stage he will open (or) house was opened stage,he will locked.

Then 2nd theif come ,he will check 2,4,6,8,......upto 100 th house.same operation will repeated from 1st  thief.If house was locked stage he will open (or) house was opened stage,he will locked.

Then 3rd theif come ,he will check 3,6,9,12,,......upto 100 th house and 4th thief come and check 4,8,12,16,...upto 100 th house.

This same operation will repeated untill all thieves are check every houses from their order.

After completed all thieves ,we should calculate how many houses are opened stage and locked stage?

Note :

Number of houses = Number of thieves

    Input Format
    An integer

    Contraints
    1<=N<100000 

    Output Format
    An integer

    Sample Input
    50

    Sample Output
    Opened houses = 7
    Locked houses = 43
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

int findOpenClosed(int num)
{
    int arr[100000]={0};
    
    for(int i=1;i<=(num);i++)
    {
        for(int j=1;(i*j)<=num;j++)
        {
            arr[j*i] = (arr[j*i]==0)?1:0;
        }
    }

    int count=0;
    for(int i=1;i<=num;i++)
    {
        if(arr[i]==1)
            count++;
    }

    return count;
}


int main()
{

    #ifndef ONLINE_JUDGE
     freopen("input.txt","r",stdin);
     freopen("output.txt","w",stdout);
    #endif

    int num,open,closed;
    sn(num);
    open = findOpenClosed(num);
    cout<<"Opened houses = "<<open<<endl;
    cout<<"Locked houses = "<<(num-open)<<endl;
    

    return 0;
}