/*
Alpha Numeric Sorting
CONTEST: CODEVITA 

Problem Statement:
Given text comprising of words and numbers, sort them both in ascending order 
and print them in a manner that a word is followed by a number. 
Words can be in upper or lower case. You have to convert them into lowercase 
and then sort and print them.

Input Format
Each line contains a text in which words are at odd position and numbers are at even position and are delimited by space

Constraints
1. Text starts with a word

2. Count of words and numbers are the same.

3. Duplicate elements are not allowed

4. Words should be printed in lower case.

5. No special characters allowed in text.

Output Format
Words and numbers sorted in ascending order and printed in a manner that a word is followed by a number.

Sample Input
Sahana 78 SuRya 26 PriyA 23 Preni 3
Sample Output
preni 3 priya 23 sahana 26 surya 78
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

   
    
    vector<string> vs;
    vi v;
    
    string str;
    while(cin>>str)
    {
        if(isdigit(str[0]))
        {
            v.pb(stoi(str));
        }
        else
        {       
                transform(str.begin(),str.end(),str.begin(),::tolower);
                vs.pb(str);
        }
        

    }

    sort(v.begin(),v.end());
    sort(vs.begin(),vs.end());
    int flag = 0;
    
    int v_s = v.size();
    int vs_s = vs.size();

   int maxim = (v_s>vs_s)?v_s:vs_s;

   for(int i=0;i<maxim;i++)
   {
       if(flag == 0)
       {
           if(i<vs_s)
           {
               cout<<vs[i]<<" ";
           }
           flag = 1;
       }

       if(flag == 1)
       {
           if(i<v_s)
           {
               cout<<v[i]<<" ";
           }
           flag = 0;
       }
       
   }


    
    
    


    return 0;
}