/*
Reverse Gear

Problem Statement:

A futuristic company is building an autonomous car. 
The scientists at the company are training the car to perform Reverse parking. 
To park, the car needs to be able to move in backward as well as forward direction. 
The car is programmed to move backwards B meters and forwards again, say F meters, 
in a straight line. 
The car does this repeatedly until it is able to park or collides with other objects. 
The car covers 1 meter in T units of time. 
There is a wall after distance D from car's initial position in the backward direction.
The car is currently not without defects and hence often hits the wall.
The scientists are devising a strategy to prevent this from happening.
Your task is to help the scientists by providing them with exact information on amount 
of time available before the car hits the wall.

Input Format:
First line contains total number of test cases, denoted by N

Next N lines, contain a tuple containing 4 values delimited by space

F B T D, where

1. F​ denotes forward displacement in meters

2. B ​denotes backward displacement in meters

3. T ​denotes time taken to cover 1 meter

4. D ​denotes distance from Car's starting position and the wall in backward direction

Constraints
First move will always be in backward direction

1 <= N <= 100

backward displacement > forward displacement i.e. (B > F)

forward displacement (F) > 0

backward displacement (B) > 0

time (T) > 0

distance (D) > 0

All input values must be positive integers only

Output Format
For each test case print time taken by the Car to hit the wall

Sample Input
6 9 3 18
Sample Output
162

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

    
    int f,b,t,d;
    cin>>f>>b>>t>>d;
    int tmp = b-f,tmp_d = f+b;
    int t_dist=0;
    while(d>b)
    {
       d-=tmp;
       t_dist += tmp_d;

    }

    t_dist+=d;

    int amt = t_dist * t;
    cout<<amt;

    return 0;
}