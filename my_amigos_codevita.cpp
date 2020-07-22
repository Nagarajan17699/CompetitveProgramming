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

class person
{
    public:
        char name;
        char iright,ileft,adj,ops;
        char pos;

    public:
        person(char t_name)
        {
            name = t_name;
        }

};

int main()
{

    #ifndef ONLINE_JUDGE
     freopen("input.txt","r",stdin);
     freopen("output.txt","w",stdout);
    #endif
    vector<person> vp;
    int num;
    cin>>num;
    char c;
    for(int i=1, c= 'A';i<=2*num;i++,c++)
    {
        person p(c); 
        vp.pb(p);  
    }
    int in,out;
    string ip,qp;
    cin>>ip>>qp;
    stringstream ss(ip),sq(qp);
    string str;
    vector<string> vs,vq;
    
    while(getline(ss,str,';'))
    {
        vs.pb(str);
    }
    while(getline(sq,str,';'))
    {
        vq.pb(str);
    }

    for(person p:vp)
    {
        cout<<p.name<<" "<<p.ops<<" "<<p.ileft<<" "<<p.iright<<endl;
        if(p.name == 'D')
            p.ops = 'A';
        
    }
   // cout<<"vs:->"<<vs[0][2];
   
    for(string s:vs)
    {
        //cout<<s[0]-48<<endl;
        switch(s[0]-48)
        {
            case 1:{
                for(person p: vp)
                {
                    if(p.name == s[1])
                        p.adj=s[2];break;
                }
                
            }
            break;
            case 2:{
                for(person p: vp)
                {
                    if(p.name == s[1])
                        p.ops=s[2];
                   // cout<<s[2];
                }
            }
            break;
            case 3:{
                for(person p: vp)
                {
                    if(p.name == s[1])
                        p.ileft=s[2];      
                }
            }
            break;
            case 4:{
                for(person p: vp)
                {
                    if(p.name == s[1])
                        p.iright=s[2];
                }
            }
            break;
            case 5:{
                for(person p: vp)
                {
                    if(p.name == s[1])
                        p.pos='i';
                }
            }
            break;
             case 6:{
                for(person p: vp)
                {
                    if(p.name == s[1])
                        p.pos='o';
                }
            }
            break;
             case 7:{
               in = (int)str[1]-48;
            }
            break;
            case 8:{
                out = (int)str[1]-48;
            }
            break;

        }
    }

    for(string s:vq)
    {
        switch(s[1]-48)
        {
            case 2:{
                for(person p: vp)
                {
                    if(p.name == s[2])
                        cout<<p.ops<<";";
                }
            }
                break;
            case 3:{
                for(person p: vp)
                {
                    if(p.name == s[2])
                        cout<<p.ileft<<";";
                }
            }break;
            case 4:{
                for(person p: vp)
                {
                    if(p.name == s[2])
                        cout<<p.iright<<";";
                }
            }break;
            case 5:{
                for(person p: vp)
                {
                    if(p.name == s[2] )
                        cout<<((p.pos=='i')?"Yes;":"No;");
                        
                }
            }break;
            case 6:{
                for(person p: vp)
                {
                    if(p.name == s[1])
                        cout<<((p.pos=='o')?"Yes;":"No;");
                        
                }
            }break;
        }
    }

    return 0;
}

//Not Complete