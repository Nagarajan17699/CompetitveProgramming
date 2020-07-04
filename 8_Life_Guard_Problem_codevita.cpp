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

double finddist(int x1,int y1,int x2,int y2)
{
    double x_1 = (double)x1;
    double y_1 = (double)y1;

    double ans = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
   // cout<<ans;
    return ans;
}

int main()
{

    #ifndef ONLINE_JUDGE
     freopen("input.txt","r",stdin);
     freopen("output.txt","w",stdout);
    #endif

    int x1,x2,y1,y2;
    double f;
    cin>>x1>>y1>>x2>>y2>>f;

    double m_min = INT_MAX;
    double m_x=0;
    int t1 = min(x1,x2);
    int t2 = max(x1,x2);
   for(int i=t1;i<=t2;i++)
   {
       double t_d1 = finddist(i,0,x1,y1);
       double t_d2 = finddist(i,0,x2,y2);

       double sum = t_d1/f + t_d2;
    //    cout<<sum<<endl;
       
       if(m_min > sum){
        m_x = (double)i;
        //cout<<i<<endl;
       }

      m_min = ((m_min>sum)?sum:m_min);

       

   }

   printf("%.6lf\n",m_x);
  


    return 0;
}