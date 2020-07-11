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

    int num1,num2;
    cin>>num1>>num2;
    int len = to_string(num2).length();
    int flag=0;
    for(int i=1;i<=len;i++)
    {
            int di = num2%10;
            di = di*ceil(pow(10,len-1));
            num2/=10;
            //cout<<num2<<" "<<di<<endl;
            num2+=di;
            //cout<<num2<<" ";
            if(num2==num1)
                {
                    flag=1;
                    break;
                }
    }
     cout<<((flag == 1)?"Yes":"No");
   return 0;
}
   

/*
int num1,num2;
    cin>>num1>>num2;
    string s1,s2;
    s1 = to_string(num1);
    s2 = to_string(num2);
    
    string s3 = s2+s2;
    cout<<((s3.find(s1) != string::npos)?"Yes":"No");
*/