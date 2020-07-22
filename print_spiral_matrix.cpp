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

    int n;
    cin>>n;
    int arr[100][100];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>arr[i][j];
    
    int top = 0,bot=n-1,lft=0,rit=n-1;
    int sval=0;
     //cout<<sval<<endl;
     int i=0;
    while(top<=bot && lft<=rit)
    {
        if(i++ > 100)
            break;

       // cout<<sval<<endl;
        switch(sval)
        { 
            case 0:
            {
                for(int i=lft;i<=rit;i++)
                    cout<<arr[top][i]<<" ";
                top++;
                sval = (++sval)%4;
            //     if(top <=2)
            // cout<<"Here";
            }
            break;

            case 1:
            {
                for(int i=top;i<=bot;i++)
                    cout<<arr[i][rit]<<" ";
                    rit--;
                sval = (++sval)%4;
            }
            break;

            case 2:
            {
                for(int i=rit;i>=lft;i--)
                    cout<<arr[bot][i]<<" ";
                bot--;
                sval = (++sval)%4;
            }
            break;

            case 3:
            {
                for(int i=bot;i>=top;i--)
                    cout<<arr[i][lft]<<" ";
                    lft++;
                sval = (++sval)%4;
            }
            break;
        }

    }
    

    return 0;
}

