/*
i/p:
 5
o/p:
01 02 03 04 05 26 27 28 29 30
   06 07 08 09 22 23 24 25
      10 11 12 19 20 21
         13 14 17 18
            15 16

program: */

#include<bits/stdc++.h>
using namespace std;

int calcnext(int i,int num)
{
    int sum=0;
    for(int j=num-i;j>0;j--)
    {
        sum += (2*j);
    }

    for(int j=((num-i)+1);j<=num;j++)
    {
        sum+=j;
    }

    return ++sum;
}

int main()
{

int num,inc=1;
cin>>num;
for(int i=1;i<=num;i++)
{
    for(int j=0;j<(2*(i-1))+(i-1);j++)
        cout<<" ";
      
     
    //  if(i!=1)
    //     cout<<" ";
    for(int j = 1;j<=(num+1)-i;j++)
    {
        printf("%.2d ",inc);
        inc++;
    }

    int n2 = calcnext(i,num);

    for(int j = 1;j<=(num+1)-i;j++)
    {
         printf("%.2d ",n2);
        n2++;
    }

cout<<endl;


}

return 0;
}