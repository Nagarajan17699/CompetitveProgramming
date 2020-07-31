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

    int t;
    cin>>t;

    while(t--)
    {
        int num,count=0;
        cin>>num;
        int arr[10000],org[10000];

        for(int i=1;i<=num;i++){
            cin>>arr[i];
        }
        
        int ar1[10000],ar2[10000];
        for(int i=1;i<=num;i++){
            ar2[i] = i;
            org[i] = i;
        }
         
        for(count=1;;count++)
        {
            for(int i=1;i<=num;i++)
                ar1[arr[1]] = ar2[i];
            for(int i=1;i<=num && ar1[i] == org[i];i++)
            {
                if(i-1==num)
                    break;
            }
            
            count++;

            for(int i=1;i<=num;i++)
                ar2[arr[i]] = ar1[i];

            for(int i=1;i<=num && ar2[i] == org[i];i++){
                if(i-1==num)
                    break;
                if(count<45)
                    cout<<i<<" "<<num<<endl;
            }

                // if(count<45){
                //     cout<<"Hello"<<endl;
                
                //   cout<<count<<endl;
                // }
        }

        cout<<count<<endl;

    }

    return 0;
}
// bool isequal(int arr[],int n)
// {
//     for(int i=1;i<=n;i++)
//     {
//         if(arr[i] != i)
//             return false;
//     }
//     return true;
// }

// int groove(int arr[],int num)
// {
//     int ar2[10000]={0},ar3[10000] = {0};
//     for(int i=1;i<=num;i++)
//     {
//         ar2[i] = i;
//     }
//     bool fl = true;
//     int count = 0;

//     while(fl)
//     {
//         //cout<<"Here"<<endl;
//         for(int i=1;i<=num;i++)
//         {
//             ar3[arr[i]] = ar2[i];
//         }
//         count++;
        
//         for(int i=1;i<=num;i++)
//         {
//             ar2[i] = ar3[i];
//         }
        
//        if(isequal(ar2,num))
//         fl=false;
            
        
        
//     }

//     return count;
   
// }

// int main()
// {

//     #ifndef ONLINE_JUDGE
//      freopen("input.txt","r",stdin);
//      freopen("output.txt","w",stdout);
//     #endif

//     int t;
    
//     cin>>t;;
//     while(t--)
//     {
//         int num;
//         cin>>num;
//         int arr[10000]={0};
//         for(int i=1;i<=num;i++)
//             cin>>arr[i];
//         cout<<groove(arr,num);

        
//     }

    

//     return 0;
// }