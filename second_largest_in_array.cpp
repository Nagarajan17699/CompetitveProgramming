/*
Second Maximum

Problem Statement:

Find second maximum number in array

Input Format
N - number of array elements

array elements

Contraints
1<=N<=10000

Output Format
print second maximum value

Sample Input
20
53 456 13 465 312 654 312 6565 312 45 5 132 5 46 152 12 645 5 312 645
Sample Output
654

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



int main()
{

    #ifndef ONLINE_JUDGE
     freopen("input.txt","r",stdin);
     freopen("output.txt","w",stdout);
    #endif

    int temp,num;
    vi v;
    sn(num);

    for(int i=0;i<num;i++)
    {
        cin>>temp;
        v.pb(temp);
    }

    int first = INT_MIN, sec = INT_MIN;
    for(int i=0;i<num;i++)
    {
        if(v[i]>first)
        {
            sec = first;
            first = v[i];
        }
        else if(v[i]<first && v[i] > sec)
        {
            sec = v[i];
        }

    } 
    cout<<sec<<endl;
    

    return 0;
}