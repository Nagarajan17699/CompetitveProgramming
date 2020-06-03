/*
In the Byteland country a string "S" is said to super ascii string if and only if count of each character in the string is equal to its ascii value.

In the Byteland country ascii code of 'a' is 1, 'b' is 2 ...'z' is 26.

Your task is to find out whether the given string is a super ascii string or not.

Input Format
First line contains number of test cases T, followed by T lines, each containing a string "S".

Constraints
1<=T<=100

1<=|S|<=400, S will contains only lower case alphabets ('a'-'z').

Output Format
For each test case print "Yes" if the String "S" is super ascii, else print "No"

Sample Input
2
bba
Scca
Sample Output
Yes
No

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
    int t;
    cin>>t;
    while(t--){
    string s;
    cin>>s;
    mci m;

    for(char c:s)
    {
        if(c<96)
            c+=32;
        m[c]++;
    }
    bool flag = true;
    for(char i='a';i<='z';i++)
    {
        int tmp = i-96;
        
        if(m[i] != tmp && m[i]>0){
            flag=false;
        }

    }

    cout<<(flag?"Yes":"No")<<endl;
    }
    return 0;
}