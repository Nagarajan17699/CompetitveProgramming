/*
Digit Pairs

Problem Description:  
(caution) => Not Accepted in Mockvita

Given N three-digit numbers, your task is to find bit score of all N numbers and then print the number of pairs possible based on these calculated bit score.

1. Rule for calculating bit score from three digit number:

From the 3-digit number,

· extract largest digit and multiply by 11 then

· extract smallest digit multiply by 7 then

· add both the result for getting bit pairs.

Note: - Bit score should be of 2-digits, if above results in a 3-digit bit score, simply ignore most significant digit.

Consider following examples:

Say, number is 286

Largest digit is 8 and smallest digit is 2

So, 8*11+2*7 =102 so ignore most significant bit , So bit score = 02.

Say, Number is 123

Largest digit is 3 and smallest digit is 1

So, 3*11+7*1=40, so bit score is 40.

2. Rules for making pairs from above calculated bit scores

Condition for making pairs are

· Both bit scores should be in either odd position or even position to be eligible to form a pair.

· Pairs can be only made if most significant digit are same and at most two pair can be made for a given significant digit.

Constraints
N<=500

Input Format
First line contains an integer N, denoting the count of numbers.

Second line contains N 3-digit integers delimited by space

Output
One integer value denoting the number of bit pairs.

Timeout
1

Explanation
Example 1

Input

8

234 567 321 345 123 110 767 111

Output

3

Explanation

After getting the most and least significant digits of the numbers and applying the formula given in Rule 1 we get the bit scores of the numbers as:

58 12 40 76 40 11 19 18

No. of pair possible are 3:

40 appears twice at odd-indices 3 and 5 respectively. Hence, this is one pair.

12, 11, 18 are at even-indices. Hence, two pairs are possible from these three-bit scores.

Hence total pairs possible is 3
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

int makenum(int num)
{
    int t=2,res=0,pi=0;
    while(t--)
    {
        int tmp = num%10;
        res += tmp*pow(10,pi++);
        num/=10;
    }

    return res;
}

int main()
{
  int t_count=0;
    int n,pos=1;
    cin>>n;
    vi v,res;
    for(int i=0;i<n;i++)
    {
        int tmp; cin>>tmp;
        v.pb(tmp);
    }
    
    for(int i:v)
    {
        int max=INT_MIN,min=INT_MAX;
        while(i)
        {
            int t = i%10;
            if(t<min)
                min=t;
            if(t>max)
                max=t;
            i/=10;
        }
        int t_num = (max*11) + (min*7);
        res.pb(makenum(t_num));
    }

     mii m;
     int t_inc=0;
    // set<int> s;

    while(t_inc < 2)
    {
        for(int i=t_inc;i<n;i+=2)
        {
            m[ (res[i]/10) ] ++;
        }
        for(int i=0;i<10;i++)
        {
            if(m[i] == 2)
                t_count++;
            else if(m[i] > 2)
                t_count+=2;
            
        }
        t_inc++;
    }    
    cout<<t_count;
    return 0;
}


