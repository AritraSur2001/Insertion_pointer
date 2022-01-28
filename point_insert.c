#include<stdio.h>
#include<stdlib.h>
#define size 10
void main()
{
    int a[size],i;
    printf("Enter %d elements...\n",size);
    for(i=0;i<size;i++)
        scanf("%d",&a[i]);
    insertion(a);
}
void insertion(int *pt)
{
    int i,j,temp;
    for(i=1;i<size;i++)
    {
        temp=*(pt+i);
        for(j=(i-1);j>=0 && temp<*(pt+j);j--)
            *(pt+j+1)=*(pt+j);
        *(pt+j+1)=temp;
    }
    printf("The sorted elements are...\n");
    for(i=0;i<size;i++)
        printf("%d\t",*(pt+i));
}
