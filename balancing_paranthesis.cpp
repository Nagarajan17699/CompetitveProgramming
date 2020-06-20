/*
PROGRAM STATEMENT:  Balance the given Paranthesis
			

i/p: (())()
o/p: 3 

i.p: (()()
o/p: Not Balanced
*/

#include <bits/stdc++.h>

using namespace std;
int main()
{

    string str;
    char temp='(';
   
    while((temp=='(') || (temp==')')) //this WHILE block can be replaced by "cin>>str". 
    {  			//This while loop has been written due to some problem during getting the input from hackerearth site.
        temp='*';
        cin>>temp;
        //cout<<temp;
        if(temp != '*')
        str+=temp;
    }
   //cout<<str;
    int count=0;
    stack<char> s;
    //cout<<str;
    for(int i=0;i<str.length();i++)
    {
        //cout<<str[i];
        if(str[i]=='(')
            s.push('(');
        else if(str[i]==')' && (!s.empty()))
        {
            s.pop();
            count++;
        }
        else
        {
            cout<<"-1"<<endl;
            return 0;
        }
    }
    cout<<count<<endl;
    return 0;
}
