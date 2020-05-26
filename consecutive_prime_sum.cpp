/*
Write code to find out number of prime numbers that satisfy the above mentioned property in a given range.

Some prime numbers can be expressed as Sum of other consecutive prime numbers.

For example

 

5 = 2 + 3

17 = 2 + 3 + 5 + 7

41 = 2 + 3 + 5 + 7 + 11 + 13

Your task is to find out how many prime numbers which satisfy this property are present in the range 3 to N subject to a constraint that summation should always start with number 2.

Input Format
First line contains a number N

Contraints
summation should always start with number 2.

Output Format
Print the total number of all such prime numbers which are less than or equal to N.

Sample Input
15
Sample Output
1

*/
#include<bits/stdc++.h>
using namespace std;

bool isprime(int num)
{
    for(int i=2;i<=sqrt(num);i++)
    {
        if(num%i == 0)
            return false;
        
    }
    
    return true;
}
void sieve(int arr[],int len)  //  Used SIEVE OF ERATOSTHENE to filter prime numbers for the given range
{
   
    arr[0]=0;arr[1]=0;
    for(int i=2;i<=(len/2);i++)
    {
        for(int j=1;(i*j)<=len;j++)
        {
            if(j==1 && arr[i] !=0)
                arr[i] = 1;
            else
            {
                arr[j*i]=0;
            }
        }
    }
    
}

int findprime(int num)
{
    int arr[num+1];
    for(int i=0;i<=num;i++)
    arr[i] = -1;
    
    sieve(arr,num);
    vector<int> v;
    
    for(int i=0;i<=num;i++)
     if(arr[i]==1)
        v.push_back(i);
        
    //cout<<v[2];
    int sum=2,count=0;
     for(auto i=(v.begin()+1);i!=v.end();i++)
     {
         sum += (*i);
         if(sum<=num && isprime(sum))
            count++;
         
     }
    return count;    
    
}
int main()
{
    
    int num;
    cin>>num;
    cout<<findprime(num);
    return 0;
}