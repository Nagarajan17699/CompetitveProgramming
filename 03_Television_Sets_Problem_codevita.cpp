/*
Dr. Vishnu is opening a new world class hospital in a small town designed to be the first preference of the patients in the city. Hospital has N rooms of two types – with TV and without TV, with daily rates of R1 and R2 respectively.

However, from his experience Dr. Vishnu knows that the number of patients is not constant throughout the year, instead it follows a pattern. The number of patients on any given day of the year is given by the following formula –

(6-M)^2 + |D-15| ,

where M is the number of month (1 for jan, 2 for feb …12 for dec) and D is the date (1,2…31).

All patients prefer without TV rooms as they are cheaper, but will opt for with TV rooms only if without TV rooms are not available. Hospital has a revenue target for the first year of operation. Given this target and the values of N, R1 and R2 you need to identify the number of TVs the hospital should buy so that it meets the revenue target. Assume the Hospital opens on 1st Jan and year is a non-leap year.
Constraints

Hospital opens on 1st Jan in an ordinary year

5 <= Number of rooms <= 100

500 <= Room Rates <= 5000

0 <= Target revenue < 90000000

Input Format

First line provides an integer N that denotes the number of rooms in the hospital

Second line provides two space-delimited integers that denote the rates of rooms with TV (R1) and without TV (R2) respectively

Third line provides the revenue target

Output

Minimum number of TVs the hospital needs to buy to meet its revenue target. If it cannot achieve its target, print the total number of rooms in the hospital.

Test Case

Example-1 :

Input

20

1500 1000

7000000

Output

14


Explanation

Using the formula, number of patients on 1st Jan will be 39, on 2nd Jan will be 38 and so on. Considering there are only twenty rooms and rates of both type of rooms are 1500 and 1000 respectively, we will need 14 TV sets to get revenue of 7119500. With 13 TV sets Total revenue will be less than 7000000

Example-2 :

Input

10

1000 1500

10000000

Output

10

Explanation

In the above example, the target will not be achieved, even by equipping all the rooms with TV. Hence, the answer is 10 i.e. total number of rooms in the hospital.
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

    int tv,t_min,t_max,tot;
    cin>>tv>>t_min>>t_max>>tot;
    int mn[]{0,31,28,31,30,31,30,31,30,30,31,30,31};
    mii m;
    for(int i=1;i<13;i++)
    {
        for(int j=1;j<=mn[i];j++)
        {
           m[(pow((6-i),2)+ abs(j-15))]++;      //(6-M)^2 + |D-15|
        }
    }

    int w_tv=0,wi_tv=tv,t_res=0;
    for(int i=wi_tv,j=w_tv; t_res<tot && i>0; i--,j++)
    {
        t_res=0;
        for(int k=0;k<53;k++)
        {
            if(k<i)     // guests < without tv rooms
                t_res+= k*m[k]*t_min;                      
            else if(k>i && k-i<j)   // guest > without tv && guest - without tv rooms < with tv rooms
                t_res+= (m[k]*i*t_min) + ((k-i)*m[k]*t_max); 
            else        //guest > total rooms combined
                t_res+= (i*m[k]*t_min) + (j*m[k]*t_max); 
        }

        if(t_res>=tot || i==0)
        {
            wi_tv=i;
            w_tv=j;
        }
    }
    
    cout<<wi_tv<<" "<<w_tv<<endl;

    return 0;
}