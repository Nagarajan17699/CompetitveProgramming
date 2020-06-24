/*
Accico Equi Pairs
Problem Statement
Ron Wesley has been bit by a three headed snake and Harry Potter is searching for a potion. The Witch promises to tell the ingredients of the medicine if Harry can find ​equi pair​of an array. Listen to the conversation between Harry The witch to know more about equi pairs.

 

Conversation:-

The Witch : To find the equi pair, you must know how to find the slices first.

Harry         : What is a slice?

The Witch : If Z is an array with N elements, a slice of indices (X, Y) is Z[X] + Z[X+1]...Z[Y]

Harry         : How can I use it to find equi pair?

The Witch : (a, b) is an equi pair if slice of (0, a-1) = slice of (a+1, b-1) = slice of (b+1, N-1) and b>a+1 and size of array > 4

Input Format
An array of N integers delimited by white space

Constraints
Z​i>= 0 and 1<= i <=N

size of array (N) > 4

b > (a+1)

Output Format
Print equi pair in first line in the format { a,b }

Print slices in the format { 0,a-1 }, { a+1,b-1 }, { b+1,N-1 }

OR

Print "Array does not contain any equi pair" if there are no equi pairs in the array

Sample Input
8 3 5 2 10 6 7 9 5 2
Sample Output
Indices which form equi pair { 3,6}Slices are { 0,2 },{ 4,5 },{ 7,9 }

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

int sumres(int a,int b, vi v)
{
    int  sum = 0;
    for(int i=a;i<=b;i++)
    {
        sum+=v[i];
    }

    return sum;
}
bool isequi(int x,int y,vi v)
{
    int s1 = sumres(0,x-1,v);
    int s2 = sumres(x+1,y-1,v);
    int s3 = sumres(y+1,v.size()-1,v);

    if(s1==s2 && s1==s3)
        return true;
    
    return false;
}

int main()
{

    #ifndef ONLINE_JUDGE
     freopen("input.txt","r",stdin);
     freopen("output.txt","w",stdout);
    #endif

    vi v;
    int tmp,flag=0;

    while(cin>>tmp)
        v.pb(tmp);

    int size = v.size()-1;
    for(int i=0;i<=size;i++)
    {
        for(int j=i;j<=size;j++)
        {
            if(isequi(i,j,v))
            {
                cout<<"Indices which form equi pair { "<<i<<","<<j<<"}Slices are { "
                <<0<<","<<i-1<<" },{ "<<i+1<<","<<j-1<<" },{ "<<j+1<<","<<size<<" }";
                flag=1;
            }
        }
    }

    if(flag == 0)
        cout<<"Array does not contain any equi pair"<<endl;
    return 0;
}