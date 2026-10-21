#include<stdio.h>
void linear(int a[],int n,int t);
void main(){
    int a[20],n,i,t;
    printf("\nHow many numbers in the list :");
    scanf("%d",&n);
    printf("Enter number:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("\nEnter number to search:");
    scanf("%d",&t);
    linear(a,n,t);
}
void linear(int a[],int n,int t)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]==t)
        {
            printf("\nSearch sucessfull and number found at %d position",i+1);
            break;
        }
    }
    if(i==n)
    printf("\nSearch uncessfull");
}