/*
Find the ID
Problem Statement
There are N soliders standing in a line with ID from 1 to N, in increasing order. They are going to participate in an exercise consisting of Q actions. During the ith action the Major calls two numbers Li and R i. The soldiers at the Li th and Ri th positions interchange their places and then soliders at ( Li + 1)th an ( Ri- 1)th positions interchange their places and so on till (Li+m)<(Ri-m). Eath of the soliders's ID will be covered in the range [ Li , Ri] for at most one action.

Write an algorithm to find the ID of the solider at Kth position in the line after all the actions are completed.

Input Format
The input to the function/method consists of four arguments -

num , an integer representing the number of soliders(N)

actions , an integer representing the number of actions(Q)

position, an integer representing the position of the solider whose ID is required to be found after Q actions (K)

act , a list of integers where each element of the list consists of a pair representing the position of the intially called soldiers for the action( Li , R)

Constraints
1 <= position <= num < 10 5

1 <= actions <= 10 5

1 <=act[i][0] <= act[i][1] <= num

0<= i < actions

Output Format
Return an integer representing the ID of the Kth position solider in the line after Q actions

Sample Input
10 2 4
1 5
6 10
Sample Output
2
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

    int size,act,pos;
    vector<pair<int,int>> vp;
    cin>>size>>act>>pos;
    vector<int> v(size);
    for(int i=0;i<size;i++)
        v[i] = i+1;
    for(int i=0;i<act;i++)
    {
        int t1,t2;
        cin>>t1>>t2;
        pair<int,int> tp = {t1,t2};
        vp.pb(tp);
    }
    
    for(auto a:vp)
    {
        cout<<a.first<<" "<<a.second<<endl;
    }
    for(auto a:vp)
    {
        int l=(a.first - 1),r= (a.second - 1);
        while(l<r)
        {
            int tmp = v[l];
            v[l] = v[r];
            v[r] = tmp;
            l++;r--;
        }
    }
    cout<<v[pos-1];

    return 0;
}