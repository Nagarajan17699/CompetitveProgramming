/*
//Decompressing a string
//Problem Statement
Given a compressed string find the corresponding decompressed string.

Input Format
Accept a compressed string.

Contraints
1<=len<=1000

Output Format
Print the decompressed string.

Sample Input
x120
Sample Output
xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
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

   string str;
   cin>>str;
   mci m;
   char tmp=',';
   int num=0;

   for(int i=0;i<str.length();i++)
   {
       if(str[i]>='a' && str[i] <= 'z')
       {
            m[tmp] = num;
            num=0;
            tmp = str[i];
       }
       else
       {
           num = (num*10)+(str[i]-48); //ASCII Value of 0 is 48 thus '0' = 48, '1' = 49 thus (char_num-48) gives the number
       }
    
   }
   m[tmp] = num;

   for(char i = 'a';i<='z';i++)
   {
       if(m[i]>0)
       {
          for(int j=1;j<=m[i];j++)
          {
              cout<<i;
          } 
       }
   }

    return 0;
}