#include <bits/stdc++.h>
using namespace std;

int main()
{
   int num;
   
   cin>>num;
   char arr[num];
   for(int i=0;i<num;i++)
    cin>>arr[i];
   char lf = '0',rt='0';
    int cnt = 0,l_ind=0,r_ind=0;

   for(int i=0;i<num;i++)
   {
       if(arr[i] == '-')
        cnt++;
       if(arr[i]!='-' && cnt == 0)
       {
        lf = arr[i];
        l_ind = i;
       }
      if(arr[i]!='-' && cnt != 0)
      {
          rt = arr[i];
          r_ind = i;

          if(l_ind != 0){
            l_ind++;
         }
          r_ind--;

          if(lf=='B' && rt=='A')
          {
              while(l_ind<r_ind)
              {
                  arr[l_ind++] = 'B';
                  arr[r_ind--] = 'A';
              }
          }
          else if(lf=='B')
          {
              while(l_ind <= r_ind)
                arr[l_ind++] = 'B';
          }
          else if(rt=='A')
          {
              while(l_ind <= r_ind)
                arr[l_ind++] = 'A';
          }

          cnt=0;
          lf='0',rt='0';i--;

      }
   }

   int a_cnt=0,b_cnt=0;
 
   for(int i=0;i<num;i++)
   {
       if(arr[i]=='A')
        a_cnt++;
       else if(arr[i]=='B')
        b_cnt++;
   }


    if(a_cnt>b_cnt)
        cout<<"A";
    else if(a_cnt<b_cnt)
        cout<<"B";
    else
        cout<<"Coalition government";


    return 0;
}