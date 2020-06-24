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

    int rot;
    double lon;
    cin>>rot>>lon;

    int min_ng = 6;
    int minw_ng  = 30;

    double time = ((float)rot/360)*lon;
    //cout<<time<<endl;
    int hr = ((int)time);
    time -= hr;
    double min_t = time;

    min_t = min_t*12;

    double m_deg = min_t *30;
    double hr_deg =(float) (hr * 30.0)+(2.5*min_t);
    
    float ans = abs(hr_deg-m_deg);
    if(ans>180)
        ans = 360 - ans;
    printf("%.2f",ans);

    return 0;
}