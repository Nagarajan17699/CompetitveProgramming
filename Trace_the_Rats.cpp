/*
Trace the Rats
Problem Statement
Given a square maze ​(A) of dimension ​N​,every entry ​(Aij) in the maze is either an open cell ​'O' or a wall ​'X'​. A rat can travel to its adjacent locations (left, right, top and bottom), but to reach a cell, it must be open. Given the locations of ​R​rats, can you find out whether all the rats can reach others or not?

Input Format
Input will consist of three parts, viz.

1. Size of the maze (N)

2. The maze itself (A = N * N)

3. Number of rats (R)

4. Location of R rats (X​i, Y​i)

Note:

●     (Xi,Yi) will represents the location of the i-th rat.

●     Locations are 1-index based.

Constraints
1<=N<=350

Aij = {'O','X'}

1<=R<=N*N

1<=Xi<=N

1<=Yi<=N

Output Format
Print "Yes" if the rats can reach each other, else print "No"

Sample Input
3
OOX
OXO
OOX
4
1 1
1 2 
2 1
3 2
Sample Output
Yes

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

bool issafe(int a,int b,int n)
{
    if(a>=1 && a<=n && b>=1 && b<=n)
        return true;
    
    return false;
}
void findsol(int x,int y,char arr[100][100],int n,int sol[100][100])
{
   sol[x][y] = 1;

   if(issafe(x,y+1,n) && arr[x][y+1] != 'X' && sol[x][y+1]==0)
        findsol(x,y+1,arr,n,sol);
    if(issafe(x,y-1,n) && arr[x][y-1] != 'X' && sol[x][y-1]==0)
        findsol(x,y-1,arr,n,sol);
    if(issafe(x+1,y,n) && arr[x+1][y] != 'X' && sol[x+1][y]==0)
        findsol(x+1,y,arr,n,sol);
    if(issafe(x-1,y,n) && arr[x-1][y] != 'X' && sol[x-1][y]==0)
        findsol(x-1,y,arr,n,sol);
}
bool isPossible(char arr[100][100],vector<pair<int,int>> v,int n)
{
    int sol[100][100];

    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            sol[i][j] = 0;
        }
    }
    
    
    int x = v[0].first;
    int y = v[0].second;

    if(arr[x][y] == 'X')
        return false;

    findsol(x,y,arr,n,sol);
    int a=1,b=1;
    for(auto i: v)
    {
        if(i.first == a && i.second == b)
            continue;
        if(sol[i.first][i.second] != 1)
        {
            //cout<<i.first<<" "<<i.second<<" "<<sol[i.first][i.second]<<endl;
            return false;
        }
    }
    return true;
}

int main()
{

    #ifndef ONLINE_JUDGE
     freopen("input.txt","r",stdin);
     freopen("output.txt","w",stdout);
    #endif

    int n;
    cin>>n;

    char arr[100][100];

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>arr[i][j];
        }
    }

    int num;
    cin>>num;
    vector<pair<int,int>> v;
    for(int i=0;i<num;i++)
    {
        int t1,t2;
        cin>>t1>>t2;
        v.push_back(pair<int,int>(t1,t2));

    }
    
   cout<<((isPossible(arr,v,n)==0)?"No":"Yes");

    return 0;
}