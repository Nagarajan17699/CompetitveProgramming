/*
Identify the logic behind the series

6 28 66 120 190 276....

(Note : Answer will not be given)
Answer : n1=3, n2=2 => 3*2 --> (3+4, 2+2) => 7*4 --> (7+4, 4+2)=> 11*6 ... 

The numbers in the series should be used to create a Pyramid. The base of the Pyramid will be the widest and will start converging towards the top where there will only be one element. Each successive layer will have one number less than that on the layer below it. The width of the Pyramid is specified by an input parameter N. In other words there will be N numbers on the bottom layer of the pyramid.

The Pyramid construction rules are as follows

1.​First​ number in the series should be at the top of the Pyramid

2.​Last​ N number of the series should be on the bottom-most layer of the Pyramid, with N​th​number being the right-most number of this layer.

3.​Numbers​ less than 5-digits must be padded with zeroes to maintain the sanctity of a Pyramid when printed. Have a look at the examples below to get a pictorial understanding of what this rule actually means.

Input Format
First line of input will contain number N that corresponds to the width of the bottom-most layer of the Pyramid

Constraints
​0​ < N <= 14

Output Format
The Pyramid constructed out of numbers in the series as per stated construction rules

Sample Input
2
Sample Output
00006 
00028 00066 
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

    int n1=3,n2=2;
    for(int i=1;i<=num;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%.5d ",n1*n2);
            n1+=4;
            n2+=2;

        }

        cout<<endl;
    }


    return 0;
}