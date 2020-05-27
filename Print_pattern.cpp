/*

Sample Input
9
Sample Output
1 1 2 1 3 1 4 1 5
1 2 2 2 3 2 4 2 5
1 3 2 3 3 3 4 3 5
1 4 2 4 3 4 4 4 5
1 5 2 5 3 5 4 5 5
1 6 2 6 3 6 4 6 5
1 7 2 7 3 7 4 7 5
1 8 2 8 3 8 4 8 5
1 9 2 9 3 9 4 9 5


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

    int num;
    cin>>num;

    for(int i=1;i<=num;i++)
    { 
        int col = 1;
        for(int j=1;j<=num;j++)
        {
           
            if(j%2 == 0)
                cout<<i<<" ";
            else
             cout<<col++<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}