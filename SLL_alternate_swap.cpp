/*
SLL Alternate Swapped
Problem Statement
Implement the swap nodes in pairs function for a singly linked list where the alternate nodes are swapped(sorted in the ascending order)

Input Format
Input - Integer N specifying the number of elements, N elements in random order

Constraints
no constraint

 

Output Format
Output - The linked list with the nodes swapped

Sample Input
10
5 6 7 9 1 2 3 4 8 10
Sample Output
2 1 4 3
*/
#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node * next;
};

    Node  *newNode , *tptr , *shadow, *start;

void insertNode( int givenData)
{
    newNode = new Node();
    newNode -> data = givenData;
    newNode -> next = NULL;
    if( start == NULL )
       start = newNode;
    else
    {
    	for(tptr = start; tptr && tptr->data<givenData;shadow=tptr,tptr=tptr->next);

        if( tptr == start)
        {
            newNode -> next = tptr;
            start = newNode;
        }
        else if( tptr == NULL )
            shadow -> next = newNode;
        else
        {
            newNode -> next = tptr;
            shadow -> next = newNode;
        }
    }
    
}
void reverse()
{
Node *fast,*slow;
for(fast=start->next,slow=start;fast!=NULL && slow != NULL;fast=fast->next->next,slow=slow->next->next)
{
	int num = slow->data;
	slow->data=fast->data;
	fast->data=num;
	
}
}
void display( )
{
  for( tptr = start ; tptr ; tptr = tptr -> next )
      printf("%d ",tptr -> data);
}
int main()
{

    #ifndef ONLINE_JUDGE
     freopen("input.txt","r",stdin);
     freopen("output.txt","w",stdout);
    #endif

    int num,n;
    cin>>n;
    while(n > 0)
    {
        scanf("%d",&num);
        insertNode(num);
        n--;
    }
    reverse();
    display();
}