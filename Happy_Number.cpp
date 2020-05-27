/*

Happy Number
Problem Statement
Check given number is happy or not

7 is Happy Number,
7^2 = 49
4^2 + 9^2 = 97
9^2 + 7^2 = 130
1^2 + 3^2 + 0^2 = 10
1^2 + 0^2 = 1
As we reached to 1, 7 is a Happy Number.
19 is Happy Number,
1^2 + 9^2 = 82
8^2 + 2^2 = 68
6^2 + 8^2 = 100
1^2 + 0^2 + 0^2 = 1
As we reached to 1, 19 is a Happy Number.
Input Format
An Integer

Contraints
1<=N<=100000

Output Format
Yes or No
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

int sqr(int num)
{
    return pow(num,2);
}
bool isHappy(int num)
{
    int ans = 0,tmp;
    while(num>0)
    {
        tmp = num%10;
        num /=10;
        ans += sqr(tmp);
    }

    if(ans == 1)
        return true;
    else if(ans < 10)
        return false;

      return  isHappy(ans);
}

int main()
{

    #ifndef ONLINE_JUDGE
     freopen("input.txt","r",stdin);
     freopen("output.txt","w",stdout);
    #endif
    int nm;
    cin>>nm;
    if(isHappy(nm))
        cout<<"Yes";
    else
        cout<<"No";

    

    return 0;
}