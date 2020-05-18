/*
Program to convert the number to excel cell name 

i/p: 705  o/p: AAC

program:

*/

#include <bits/stdc++.h>
#include<iostream>
#include <map>

using namespace std;

int main() {
	int num,cnt=1;

	map<int,char> m;

	for(char i= 'A';i<='Z';i++)
	{
		m.insert(pair<int,char>(cnt,i));
		cnt++;
	}
	m.insert(pair<int,char>(0,'Z'));
	cin>>num;
	int str=0;
	string fin;

	while(num>0)
	{
		int temp = num%26;
		fin += m[temp];
		num/=26;
		
	}

	reverse(fin.begin(),fin.end());
	cout<<fin;
	
return 0;
	
}



