#include<stdio.h>
int main()
{
    int i;
    for (i=1; i<=50;i++)
    {
        if (i%2==0){
            printf("even %d\n", i);
        }
    }
    for (i=1; i<=50;i++)
    {
        if(i%2==1){
            printf("odd %d\n",i);
        }
    }
    return 0;
}


