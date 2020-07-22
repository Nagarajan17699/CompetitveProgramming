/*
Swap the contents and indexes in an array
Problem Statement
Given an array with size n and its contents are from 0 to n-1. Swap the index and contents at that index.

Input Format
Accept the size and its corresponding values.

Constraints
1<=N<=10000

Output Format
Print the processed array.

Sample Input
4
0 1 2 3
Sample Output
0 1 2 3
*/

#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    
    int arr[10000];
    for(int i=0;i<num;i++)
        cin>>arr[i];
    int flag=1,t_var=arr[0],t_ind=0,count=0;
    while(flag)
    {
        if(arr[t_var] == t_var)
        {
            for(int i=0;i<num;i++)
                if(arr[i] == i && i==num-1){
                    flag=0;
                    break;
                }
            if(flag!=0)
                t_var++;
        }
        int tmp = arr[t_var];
        arr[t_var] = t_var;
        t_var=tmp;
        
    }
    
    for(int i=0;i<num;i++)
        cout<<arr[i]<<" ";
    return 0;
}