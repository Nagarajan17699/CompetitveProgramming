#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* next;
    Node(int x)
    {
        data=x;
        next=NULL;
    }
};


int main()
{
    
    #ifndef ONLINE_JUDGE
     freopen("input.txt","r",stdin);
     freopen("output.txt","w",stdout);
    #endif

    int n,count=0;
    Node *head,*start,*shadow;
    while(cin>>n)
    {
       
        if(n == -1)
            break;
        count++;
        if(head == NULL)
        {
            head = new Node(n);
        }
        else
        {
            Node *nd = new Node(n);
          for(start=head;(start && start->data < n);shadow=start,start = start->next);
            
            if(start==head && start->data>n)
            {
                nd->next = start;
                head = nd;
            }
            else if(start == NULL)
            {
                shadow->next=nd;
            }
            else
            {
                nd->next = start;
                shadow->next = nd;
            }
        }
    }
    
    // start = head;
    // while(start != NULL)
    // {
    //     cout<<start->data<<" ";
    //     start = start->next;
    // }

    for(start = head; start ; start = start->next)
    {
        cout<<start->data<<" ";
    }
    
   
    return 0;
}