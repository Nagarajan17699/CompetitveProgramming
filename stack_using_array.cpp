/*
Stack Using Array
Problem Statement
STACK USING ARRAY

Fix the code for push opetaion

Input Format
scanning the numbers until user enter -1

Constraints
no constraint

Output Format
Display the stack elements

Sample Input
10 20 30 40 50 60 70 15 -1
Sample Output
70 could not push .. Stack is Full
15 could not push .. Stack is Full
60 50 40 30 20 10 

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

    #include <iostream>
#include <stack>
using namespace std;
int main()
{
    int n;
    stack<int> s;
   int count = 0;
    while(cin>>n)
    {
        if(n==-1)
            break;
        else if(count++ <=5)
            s.push(n);
        else
            cout<<n<<" could not push .. Stack is Full"<<endl;
    }
    
    while(s.size())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}

    return 0;
}