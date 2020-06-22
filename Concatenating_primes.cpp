/*
Concatenating primes::

If you like numbers, you may have been fascinated by prime numbers. Sometimes we obtain by concatenating two primes. For example, concatenating 2 and 3, weobtain the prime 23. The aim is to find all such distinct "concatenated primes" that could be obtained by concatenating primes ≤ a given integer N.

Example 1

Input : 10

Output : 4

Explanations:

The primes ≤ 10 are 2, 3, 5, 7. These can be used to form the following 
concatenated numbers: 22, 23, 25, 27, 32, 33, 35, 37, 52, 53, 55, 57, 72, 73, 75, 77. Of 
these,there are four primes: 23 37 53 and 73. Hence the output is 4.

Example 2

Input 20

Output 17

Explanation The prime numbers up to 20 are 2 3 5 7 11 13 17 and 19.Concatenating these two at a time in all possible ways, we get the following numbers:22 23 25 27 211 213 217 219 32 33 35 37 311 313 317 319 52 53 55 57 511 513 517 519 72 73 75 77 711 713 717 719 112 113 115 117 1111 1113 1117 1119 132 133 135 137 1311 1313 1317 1319 172 173 175 177 1711 1713 1717 1719 192 193 195 197 1911 1913 1917 1919We have the following 17 primes numbers in this list: 23 37 53 73 113 137 173 193 197 211 311 313 317 719 1117 1319 1913 Hence the output would be 17.

Input Format
Integer N

Constraints
N ≤ 70

Output Format
:M, the number of distinct primes that could be obtained by concatenating two primes ≤ N

Sample Input
10
Sample Output
4

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

bool isprime(int num)
{
    for(int i=2;i<=sqrt(num);i++)
    {
        if(num%i == 0)
            return false;
    }
    return true;
}
void sieve(int arr[],int n)
{
    arr[0]=-1;arr[1]=-1;
    for(int i=2;i<=(n/2);i++)
    {
        if(arr[i] == 0)
        {
            for(int j=2;i*j<=n;j++)
                arr[i*j] = 1;
        }
    }
}

int main()
{

    #ifndef ONLINE_JUDGE
     freopen("input.txt","r",stdin);
     freopen("output.txt","w",stdout);
    #endif

    int num;
    cin>>num;

    int arr[10000]={0};
    sieve(arr,num);
    vi v;
    for(int i=0;i<=num;i++)
    {
        if(arr[i] == 0)
            v.pb(i);
    }

    int count = 0,t_num;
    for(int i:v)
    {
        for(int j:v)
        {
            if(j<10)
                 t_num = i*10;
            else if(j<100)
                 t_num = i*100;

            if(isprime(t_num+j))
                count++;
        }
    }

    cout<<count;
    

    return 0;
}