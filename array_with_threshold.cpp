/*
Array With Threshold Value
Problem Statement
Array with threshold value

 Given an array and a threshold value find the o/p

i/p {5,8,10,13,6,2}

threshold = 3

o/p count = 17

explanation:

Number          parts               counts

5                    {3,2}                2

8                     {3,3,2}             3

10                   {3,3,3,1}          4

13                   {3,3,3,3,1}       5

6                     {3,3}                2

2                     {2}                   1

Input Format
N - no of elements in an array

array of elements

threshold value

Constraints
arraysize<=10000

Output Format
display the count

Sample Input
6
5 8 10 13 6 2 
3
Sample Output
17 
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

    int num,arr[10000],trs;
    cin>>num;
    for(int i=0;i<num;i++)
    {
       cin>>arr[i];
    }
    cin>>trs;
    int tmp,count=0;
    for(int i=0;i<num;i++)
    {   tmp = trs;
        while(arr[i])
        {
            int t_sum = arr[i]/tmp;
            if(t_sum!=0){
            count+=t_sum;
            arr[i]%=tmp;
            }
            tmp--;

            
        }
    }

    cout<<count;
    return 0;
}