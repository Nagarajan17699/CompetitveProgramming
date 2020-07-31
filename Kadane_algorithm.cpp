#include<bits/stdc++.h>
using namespace std;
int main()
{
     #ifndef ONLINE_JUDGE
     freopen("input.txt","r",stdin);
     freopen("output.txt","w",stdout);
    #endif

	int arr[10000];
	int num;
	cin>>num;
	for(int i=0;i<num;i++)
		cin>>arr[i];
	int t_max=INT_MIN,curmax=0;
	for(int i=0;i<num;i++)
	{
		curmax += arr[i];
		curmax = max(arr[i],curmax);
		if(curmax>t_max)
			t_max=curmax;
	}
	cout<<t_max;

return 0;
}