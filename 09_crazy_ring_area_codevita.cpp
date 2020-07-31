/*
Crazy Ring Area
Problem Statement:

Scientists have found a strange substance having strange properties. 
There is one triangular substance called Strange Triangle which has a property 
that if it is placed inside a circle then it expands until all the corners of the triangle 
are touching the circle. There is another circular substance called Strange Circle, 
which when placed inside any polygon, expands such that it becomes the largest possible circle
which can fit inside the polygon such that it touches every side of the polygon.

Now researchers did a strange experiment. They placed a Strange Triangle inside a 
normal circle and then placed a Strange Circle inside this Strange Triangle. 
Thus, the ring formed by the two circles, the normal outer circle and the inner strange circle
is named Crazy Ring. You are provided with the coordinates of the Strange Triangle 
on coordinate plane and you have to calculate the area of the Crazy Ring formed by the structure,
Print "Not Possible" if the ring is not possible to form.

Input Format
First line contains two space delimited numbers N1 M1 (N1 and M1 can also be negative)

Second line contains two space delimited numbers N2 M2 (N2 and M2 can also be negative)

Third line contains two space delimited numbers N3 M3 (N3 and M3 can also be negative)

Where, (N1, M1) , (N2, M2) and (N3, M3) are x and y coordinates of three points representing 
the Strange Triangle

Constraints
No Constraints

Output Format
Output the area of the crazy ring up to 2 decimal places however calculations are to be 
performed up to a precision of 11 decimal places OR Print "Not Possible" if it is not possible
to form the ring

Sample Input
5 8
4 3
2 4.34534554521
Sample Output
17.91
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

    

    return 0;
}