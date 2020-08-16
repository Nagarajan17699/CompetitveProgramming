#include <bits/stdc++.h>
using namespace std;

string num_ret(int t_num,map<int,string> m)
{
    string txt="";
    if((t_num>=0 && t_num<=20) || t_num%10==0)
           return m[t_num];
        else
        {
            
            int n1 = t_num%10;
            t_num/=10;
            t_num*=10;
            txt += m[t_num];
            txt += m[n1];
        }
        return txt;
}

int main()
{

  
    map<int,string> m;
    m.insert({0,"zero"});
    m.insert({1,"one"});
    m.insert({2,"two"});
    m.insert({3,"three"});
    m.insert({4,"four"});
    m.insert({5,"five"});
    m.insert({6,"six"});
    m.insert({7,"seven"});
    m.insert({8,"eight"});
    m.insert({9,"nine"});
    m.insert({10,"ten"});
    m.insert({11,"eleven"});
    m.insert({12,"twelve"});
    m.insert({13,"thirteen"});
    m.insert({14,"fourteen"});
    m.insert({15,"fifteen"});
    m.insert({16,"sixteen"});
    m.insert({17,"seventeen"});
    m.insert({18,"eighteen"});
    m.insert({19,"nineteen"});
    m.insert({20,"twenty"});
    m.insert({30,"thirty"});
    m.insert({40,"fourty"});
    m.insert({50,"fifty"});
    m.insert({60,"sixty"});
    m.insert({70,"seventy"});
    m.insert({80,"eighty"});
    m.insert({90,"ninety"});
    m.insert({100,"hundred"});

   int num,count=0;;
   cin>>num;
   int arr[num];
   for(int i=0;i<num;i++)
    cin>>arr[i];
    int res=0;
    for(int i=0;i<num;i++)
    {
        int t_num = arr[i];
        string txt="";
        if((t_num>=1 && t_num<=20) || t_num%10==0)
            txt = m[t_num];
        else
        {
            int n1 = t_num%10;
            t_num/=10;

            txt += m[t_num];
            txt += m[n1];
        }

        for(char c:txt)
        {
            if(c=='a' || c=='e'|| c=='i' || c=='o'||c=='u')
                count++;
        }
        
       
    }

     sort(arr,arr+num);
        int f_ptr=0,l_ptr=num-1;

        while(f_ptr<l_ptr)
        {
            int t_sum = arr[f_ptr]+arr[l_ptr];
            if(t_sum == count){
                res++;
            if(arr[l_ptr-1] != arr[l_ptr])
                l_ptr--;
            else
                f_ptr++;
            }
            else if(t_sum < count)
                f_ptr++;
            else
                l_ptr--;
            
        }

        cout<<num_ret(res,m);

    return 0;
}