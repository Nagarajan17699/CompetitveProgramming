/*

Distribute Books Problem
Problem Statement
For enhancing the book reading, school distributed story books to students as part of the Children’s day celebrations. To increase the reading habit, the class teacher decided to exchange the books every weeks so that everyone will have a different book to read. She wants to know how many possible exchanges are possible. If they have 4 books and students, the possible exchanges are 9. Bi is the book of i-th student and after the exchange he should get a different book, other than Bi.

B1 B2 B3 B4 - first state, before exchange of the books

B2 B1 B4 B3

B2 B3 B4 B1

B2 B4 B1 B3

B3 B1 B4 B2

B3 B4 B1 B2

B3 B4 B2 B1

B4 B1 B2 B3

B4 B3 B1 B2

B4 B3 B2 B1

Find the number of possible exchanges, if the books are exchanged so that every student will receive a different book

Input Format
Input contains one line with N, indicates the number of books and number of students.

Constraints
1<= N <= 1000000

Output Format
Output the answer modulo 1000000007.

Sample Input
4
Sample Output
9

Concept:

This property is called as Derangement
url: https://en.wikipedia.org/wiki/Derangement
By this property any object will not be in its original position for the whole combinations

formula: !n = (n-1)(!(n-1)*(!n-2))

here " !n " is called the subfactor of 'n'

The subfactor of 0:1 , 1:0 , 2:1 , 3:2 , 4:9 , 5:44 ...
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

long long subfact(long long n)
{
    static int arr[1000000];
    if(n==0)
        return 1;
    if(n==1)
        return 0;
    if(arr[n] !=0)
        return arr[n];
    else
        arr[n] = ((n-1)*(subfact(n-1)+subfact(n-2)))%1000000007;
    
    return arr[n];
}

int main()
{

    #ifndef ONLINE_JUDGE
     freopen("input.txt","r",stdin);
     freopen("output.txt","w",stdout);
    #endif

    long long n;
    cin>>n;

    cout<<subfact(n);

    return 0;
}
//End