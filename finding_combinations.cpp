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

int findCombinations(vector<int> v,int num)
{
    int dp[100][100];
    for(int i=0,j=0;j<=v.size();j++)
    {
        dp[i][j] = 1;
    }
    for(int i=0,j=0;i<=num;i++)
    {
        dp[i][j] = 0;
    }

    for(int i=1;i<=num;i++)
    {
        for(int j=1;j<=v.size();j++)
        {
            int res = dp[i][j-1];
            if(v[j-1] <= i)
                res += dp[i-v[j-1]][j];
            dp[i][j]=res;
        }
    }
    return dp[num][v.size()];
}

int main()
{

    #ifndef ONLINE_JUDGE
     freopen("input.txt","r",stdin);
     freopen("output.txt","w",stdout);
    #endif

    int num,tmp,size;
    int dp[100][100];
    cin>>size;
    vector<int> vc;
    string s;
    cin>>s;
    for(char c:s)
    {
        int num = c-'a'+1;
        vc.pb(num);
    }
    sort(vc.begin(),vc.end());

    // for(int c: vc)
    //     cout<<c<<" ";
    cin>>num;
    vector<string> vs;
    for(int i=0;i<num;i++)
    {
        cin>>s;
        vs.pb(s);
    }
    //cout<<vs[0];
    for(string s:vs)
    {   //cout<<s;
        int res=1;
        for(char c:s)
        {
            int t_num = c-'a'+1;
            cout<< findCombinations(vc,t_num)<<" ";
        }
        cout<<res<<endl;
    }

    
    //cout<<findCombinations(dp,vc,num);

    return 0;
}