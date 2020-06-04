/*

The task is to find the minimum sum of Products of two arrays of the same size, given that k modifications are allowed on the first array. In each modification, one array element of the first array can either be increased or decreased by 2.
Note- the product sum is Summation (A[i]*B[i]) for all i from 1 to n where n is the size of both arrays

Input Format:
First line of the input contains n and k delimited by whitespace
Second line contains the Array A (modifiable array) with its values delimited by spaces
Third line contains the Array B (non-modifiable array) with its values delimited by spaces
 

Output Format:
Output the minimum sum of products of the two arrays

Constraints:
1 ≤ N ≤ 10^5
0 ≤ |A[i]|, |B[i]| ≤ 10^5
0 ≤ K ≤ 10^9
Input:

3 5
1 2 -3
-2 3 -5

Output:

-31

Explanation:

Here total numbers are 3 and total modifications allowed are 5. So we modified A[2], which is -3 and increased it by 10 (as 5 modifications are allowed). Now final sum will be
(1 * -2) + (2 * 3) + (7 * -5)
-2 + 6 – 35
-31

-31 is our final answer.

Input:

5 3
2 3 4 5 4
3 4 2 3 2

Output:

25

Explanation:

Here total numbers are 5 and total modifications allowed are 3. So we modified A[1], which is 3 and decreased it by 6 (as 3 modifications are allowed).
Now final sum will be
(2 * 3) + (-3 * 4) + (4 * 2) + (5 * 3) + (4 * 2)
6 – 12 + 8 + 15 + 8
25

25 is our final answer.

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

int getMin(int arr[],int brr[],int n)
{
int prod=0;
for(int i=0;i<n;i++)
{
    prod += (arr[i] * brr[i]);
}
return prod;
}

int main()
{

    #ifndef ONLINE_JUDGE
     freopen("input.txt","r",stdin);
     freopen("output.txt","w",stdout);
    #endif

    int num,k;
    cin>>num>>k;
    int arr[10000],brr[10000];
    for(int i=0;i<num;i++)
    {
        cin>>arr[i];
    }
     for(int i=0;i<num;i++)
    {
        cin>>brr[i];
    }
    int f_min=INT_MAX,tmp;

    for(int i=0;i<num;i++)
    {
        int dif = arr[i]*brr[i],mod;

        //cout<<arr[i]<<"b";

        if(dif>0 && arr[i]>0)
            mod =  -(2*k);
        else if(dif>0 && arr[i]<0)
            mod =   (2*k); 
        else if(dif<0 && arr[i]>0)
            mod=(2*k);
        else if(dif<0 && arr[i]<0)
            mod= -(2*k); 

      
        arr[i]+=mod;
        tmp = getMin(arr,brr,num);
        arr[i]-=mod;

        if(tmp<f_min){
            f_min = tmp;
         
        }


    }
    cout<<f_min<<" ";
    
    return 0;
}