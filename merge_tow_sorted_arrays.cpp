#include<iostream>
using namespace std;

void mergeArray(int* arr1,int* arr2,int n1,int n2)
{
    for(int i=0,j=0;i<n1 && i<n2;i++)
    {
        if(arr2[j] < arr1[i])
        {
            int tmp = arr2[j];
            arr1[i] = arr2[j];
            arr2[j] = tmp;
            i++;
        }
        //else if()
    }
}
int main()
{
     #ifndef ONLINE_JUDGE
     freopen("input.txt","r",stdin);
     freopen("output.txt","w",stdout);
    #endif

    int num1,num2,arr1[100000],arr2[100000];
    cin>>num1;

    for(int i=0;i<num1;i++)
        cin>>arr1[i];
        cin>>num2;
    for(int i=0;i<num2;i++)
        cin>>arr2[i];

    mergeArray(arr1,arr2,num1,num2);
    
    return 0;
}