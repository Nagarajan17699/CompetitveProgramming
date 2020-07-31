/*
Water Reservation
Problem Statement
Water reservation

A Water reservation system constructed in a city has several opening and closing gates . If any opening g closing gates is no closed with corresponding gate the water will leak out of the system. And there will be a threat of life to the people living in the city . Also, a closing gate cannot exist without an opening gate. So,the system head checks the design of the system and he has to be ensure that the people are safe in the city.

 

Write an algorithm to find wheather the people are safe or not.

Input Format
The input to the function/method consists of one argument-

Str , a string representing the sequence of gates of the water reservation system

Constraints
NO CONSTRIANTS

Output Format
Return an integer representing the number of gates which have closing gates corresponding to the

opening gates else return an integer -1.

Sample Input
()(()())())()
Sample Output
-1
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

    string st;
    cin>>st;
    stack<char> s;
    int count = 0;  
    for(char c:st)
    {
        if(c == '(')
            s.push('(');
        else if(!s.empty())
        {
            s.pop();
            count++;
        }
        else
        {
            cout<<"-1";
            return 0;
        }
        

    }
    cout<<count;
    return 0;
}