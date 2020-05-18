/*
Title:  Find all pairs with a given sum

Problem:


Given two unsorted arrays A of size N and B of size M of distinct elements, the task is to find all pairs from both arrays whose sum is equal to X.

Input:
The first line of input contains an integer T denoting the no of test cases. Then T test cases follow. Each test case contains 3 lines . The first line contains 3 space separated integers N, M, X. Then in the next two lines are space separated values of the array A and B respectively.

Output:
For each test case in a new line print the sorted space separated values of all the pairs u,v where u belongs to array A and v belongs to array B, such that each pair is separated from the other by a ',' without quotes also add a space after the ',' . If no such pair exist print -1.

Constraints:
1 <= T <= 100
1 <= N, M, X <= 106
-106 <= A, B <= 106

Example:
Input:
2
5 5 9
1 2 4 5 7
5 6 3 4 8
2 2 3
0 2
1 3
Output:
1 8, 4 5, 5 4
0 3, 2 1

Explanation:
Testcase 1: (1, 8), (4, 5), (5, 4) are the pairs which sum to 9.



Solution:
*/

#include<set>
#include<bits/stdc++.h>

using namespace std;

int main() {
    
    int num;
    cin>>num;
    while(num--)
    {
        int N,M,X;
        cin>>N>>M>>X;
       
        unordered_set<int> s;
        int ar1[N],temp;
        
        bool val = false;
        for(int i=0;i<N;i++)
        {
            cin>>ar1[i];
        }
        for(int i=0;i<M;i++)
        {
            cin>>temp;
            s.insert(temp);
        }
        
        for(int i=0;i<N;i++)
        {
            int temp = X;
            temp -= ar1[i];
            if(s.find(temp) != s.end())
            {
               
                if(val)
                cout<<","<<" ";
                
                cout<<ar1[i]<<" "<<X-ar1[i];
                val = true;
                
            }
            
        }
        if(!val)
        cout<<"-1";
        cout<<endl;
    }
		return 0;
}