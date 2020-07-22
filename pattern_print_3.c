#include<stdio.h>
void print_pattern(int n)
{
    int row,col;
    for(row=1;row<=n;row++,printf("\n"))
    {
        if(row%2==0)
            printf("%d",row+1);
        for(col=1;col<=n;col++)
            printf("%d",row);
        if(row%2)
            printf("%d",row+1);
    }
}
int main()
{
    #ifndef ONLINE_JUDGE
     freopen("input.txt","r",stdin);
     freopen("output.txt","w",stdout);
    #endif

    int n;
    scanf("%d",&n);
    print_pattern(n);
}