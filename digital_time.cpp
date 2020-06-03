/*
Digital Time
Problem Statement
The objective is to form the maximum possible time in the HH:MM:SS format using any six of nine given single digits (not necessarily distinct)

Given a set of nine single (not necessarily distinct) digits, say 0, 0, 1, 3, 4, 6, 7, 8, 9, it is possible to form many distinct times in a 24 hour time format HH:MM:SS, such as 17:36:40 or 10:30:41 by using each of the digits only once. The objective is to find the maximum possible valid time (00:00:01 to 24:00:00) that can be formed using some six of the nine digits exactly once. In this case, it is 19:48:37.

Example ​1

Input​:

0 0 1 1 3 5 6 7 7

Output​:

17:57:36

Explanation​:

The maximum valid time in a 24 hour clock that can be formed using some six of the 9 digits precisely once is 17:57:36

Example 2

Input​:

3 3 3 3 3 3 3 3 3

Output:

No set of six digits from the input may be used to form a valid time

Input Format
A line consisting of a sequence of 9 (not necessarily distinct) single digits (any of 0-9) separated by commas. The sequence will be non-decreasing

Constraints
No Constraints

Output Format
The maximum possible time in a 24 hour clock (00:00:01 to 24:00:00) in a HH:MM:SS form that can be formed by using some six of the nine given digits (in any order) precisely once each. If no combination of any six digits will form a valid time, the output should be the word Impossible

Sample Input
0 0 1 2 3 4 5 6 7
Sample Output
24:00:00
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

int getMax(int r,mii m)
{
    while(r>=0){
        if(m[r]>0)
        {
            //cout<<"|"<<m[r]<<"|"<<endl;
            m[r] = m[r]-1;
            return r;
        }
        else
        {
            r--;
        }
    
    }
    return -1;
}

int main()
{

    #ifndef ONLINE_JUDGE
     freopen("input.txt","r",stdin);
     freopen("output.txt","w",stdout);
    #endif
        mii m;
        int tmp;

        while(cin>>tmp)
        {
            m[tmp]++;
        }

        int hh,mm,ss,flag=2,temp,m_flag=0;
        
        //Hour 
        while(flag--)
            {
            
                if(flag==1)
                {    
                temp = getMax(2,m);
                if(temp == -1){
                    m_flag=1;
                    break;
                }
                hh=temp; 
                m[temp]--;
                }


                if(flag==0)
                {
                  if(hh==2){
                      temp = getMax(3,m);
                      if(temp == -1)
                      {
                        m[hh]++;
                        int tmp = getMax(hh-1,m);
                            if(tmp == -1)
                                m_flag=1;
                            else{
                                hh=tmp;
                                m[tmp]--;
                                flag++;
                            }
                      }
                      else
                      {
                          hh*=10;
                          hh+=temp;
                          m[temp]--;
                      }
                      
                    } 


                  else if(hh<2)
                  {
                      temp = getMax(9,m);
                      hh*=10;
                      hh+=temp;
                      m[temp]--;
                  } 
                }
            }

            //Minutes
             flag=(m_flag==0)?2:0;

             while(flag--)
            {
            
                if(flag==1)
                {    
                temp = getMax(5,m);
                if(temp == -1){
                    m_flag=1;
                    break;
                }
                mm=temp; 
                m[temp]--;
                }


                if(flag==0)
                {
                  temp = getMax(9,m);
                  if(temp == -1)
                  {
                      m_flag=1;
                      break;
                  }
                  mm*=10;
                  mm+=temp;
                  m[temp]--;
                }
            }

            //Seconds

            flag=(m_flag==0)?2:0;

            while(flag--)
            {
            
                if(flag==1)
                {    
                temp = getMax(5,m);
                if(temp == -1){
                    m_flag=1;
                    break;
                }
                ss=temp;
                m[temp]--; 
                }


                if(flag==0)
                {
                  temp = getMax(9,m);
                  if(temp == -1)
                  {
                      m_flag=1;
                      break;
                  }
                  ss*=10;
                  ss+=temp;
                  m[temp]--;
                }
            }

    if(m_flag==0)
        printf("%d:%d:%d",hh,mm,ss);
    else
        cout<<"No set of six digits from the input may be used to form a valid time";
        


    return 0;
}



