/*
Swayamvar
Problem Description
A ceremony where a Bride chooses her Groom from an array of eligible bachelors is called Swayamvar. But this is a Swayamvar with difference. An array of Bride-to-be will choose from an array of Groom-to-be.

The arrangement at this Swayamvar is as follows

· Brides-to-be are organized such that the most eligible bachelorette will get first chance to choose her Groom. Only then, the next most eligible bachelorette will get a chance to choose her Groom

· If the initial most eligible bachelorette does not get a Groom of her choice, none of the Brides-to-be have any chance at all to get married. So unless a senior bachelorette is out of the “queue”, the junior bachelorette does not get a chance to select her Groom-to-be

· Inital state of Grooms-to-be is such that most eligible bachelor is at the head of the “queue”. The next most eligible bachelor is next in the queue. So on and so forth.

· Now everything hinges on the choice of the bachelorette. The most eligible bachelorette will now meet the most eligible bachelor.

· If bachelorette selects the bachelor, both, the bachelorette and the bachelor are now Bride and Groom respectively and will no longer be a part of the Swayamvar activity. Now, the next most eligible bachelorette will get a chance to choose her Groom. Her first option is the next most eligible bachelor (relative to initial state)

· If the most eligible bachelorette passes the most eligible bachelor, the most eligible bachelor now moves to the end of the queue. The next most eligible bachelor is now considered by the most eligible bachelorette. Selection or Passing over will have the same consequences as explained earlier.

· If most eligible bachelorette reaches the end of bachelor queue, then the Swayamvar is over. Nobody can get married.

· Given a mix of Selection or Passing over, different pairs will get formed.

The selection criteria is as follows

1. Each person either drinks rum or mojito. Bride will choose groom only if he drinks the same drink as her.

Note : There are equal number of brides and grooms for the swayamvar.

Tyrion as the hand of the king wants to know how many pairs will be left unmatched. Can you help Tyrion?

Constraints
1<= N <= 10^4

Input Format
First line contains one integer N, which denotes the number of brides and grooms taking part in the swayamvar.

Second line contains a string in lowercase, of length N containing initial state of brides-to-be.

Third line contains a string in lowercase, of length N containing initial state of grooms-to-be. Each string contains only lowercase 'r' and 'm' stating person at that index drinks "rum"(for 'r') or mojito(for 'm').

Output
Output a single integer denoting the number of pairs left unmatched.

Timeout
1

Explanation
Example 1

Input

4

rrmm

mrmr

Output

0

Explanation

The bride at first place will only marry groom who drinks rum. So the groom at first place will join the end of the queue. Updated groom's queue is "rmrm".

Now the bride at first place will marry the groom at first place. Updated bride's queue is "rmm" and groom's queue is "mrm".

The process continues and at last there are no pairs left. So answer is 0.

Example 2

Input

4

rmrm

mmmr

Output

2

Explanation

Following the above process 2 pairs will be left unmatched. Remember that bride will not move until she gets a groom of her choice.
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



int main()
{
    int num,count=0;
    cin>>num;
    string g,b;
    cin>>g>>b;
    map<char,int> mb;
    queue<char> qb,qg;
    for(char c:g){
        qg.push(c);
    }
        
    for(char c:b){
        mb[c]++;
        qb.push(c);
    }
    int flag=1;
    while(qg.size() > 0 && flag==1)
    {
        char c = qg.front();
        qg.pop();
        if(mb[c] > 0)
        {
            while(qb.front() != c)
            {
                char tmp = qb.front();
                qb.pop();
                qb.push(tmp);

            }
            qb.pop();
            mb[c]--;
            count++;
        }
        else
        {
            flag=0;
        }
        
    } 
     cout<<g.length()-count;

    return 0;
}