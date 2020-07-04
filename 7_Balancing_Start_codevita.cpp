/*
Balancing Stars Problem
Problem Statement
CODU loves to play with string of brackets. He considers string as a good string if it is balanced with stars. A string is considered as balanced with stars if string contains balanced brackets and between every pair of brackets i.e. between opening and closing brackets, there are at least 2 stars (*) present.

CODU knows how to check whether a string is balanced or not but this time he needs to keep a track of stars too. He decided to write a program to check whether a string is good or not. But CODU is not as good in programming as you are, so he decided to take help from you. Will you help him for this task?

You need to print Yes and number of balanced pair if string satisfies following conditions (string is good if it satisfies following 2 conditions):

The string is balanced with respect to all brackets.

Between every pair of brackets there is at least two stars.

However, if string doesn’t satisfy above conditions then print No and number of balanced pair in string as an output.

Input Format
The first and only line of input contains a string of characters(a-z,A-Z), numbers(0-9), brackets( ‘{‘, ‘[‘, ‘(‘, ‘)’, ‘]’, ‘}’ ) and stars(*).

Constraints
4 <= String length <= 1000

Output Format
Print space separated “Yes” (without quotes) and number of balanced pair if string is good.

Else print “No” (without quotes) and number of balanced pair.

Sample Input
{[)(]}
Sample Output
No 1
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

    char ctr;
    string str = "";
    while(cin>>ctr)
    {
        str+=ctr;
    }
    bool balanced = true;
    stack<char> s;
    int s_cnt = 0,t_bal=0;
    for(char c:str)
    {
        if(c=='(' || c=='{' || c=='['){
            s.push(c);
            s_cnt = 0;
        }
        else if(c==')' || c=='}' || c==']')
        {
            char tmp = s.top();
            s.pop();
            if(tmp - c > 2 || s_cnt < 2)
                balanced=false;
            if(abs(tmp-c) <=2){
                t_bal++;
            }
        }
        else if(c=='*')
            s_cnt++;
        
    }

    cout<<((balanced)?"Yes":"No")<<" "<<t_bal<<endl;
    return 0;
}