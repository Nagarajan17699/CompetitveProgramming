/*
Neon Number
Problem Statement
Check given number neon number or not.
(A neon number is a number where the sum of digits of square of the number is equal to the number)

Input Format
An integer

Contraints
1<=N<=1000000

Output Format
Yes or No

Sample Input
9
Sample Output
Yes

Explaination:

9*9 = 81 => 8+1 = 9 == i/p

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

string isNeon(int num)
{
    long long tmp,sum=0;
    tmp = pow(num,2);
    while(tmp>0)
    {
        sum += (tmp%10);
        tmp/=10;
    }
    if(sum == num)
        return "Yes";
    
    return "No";
}

int main()
{

    #ifndef ONLINE_JUDGE
     freopen("input.txt","r",stdin);
     freopen("output.txt","w",stdout);
    #endif

    long long num;
    cin>>num;
    cout<<isNeon(num)<<endl;
    

    return 0;
}