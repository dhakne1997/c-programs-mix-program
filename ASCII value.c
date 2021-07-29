#include<stdio.h>
main()
{
    int i,j=3,k=4,l;
   
    for(i=1;i<10;i++)
    {
        for(l=1;l<10;l++)
        {
            if(i%2!=0)
            printf("%c",j);
            else if(i%2==0)
            printf("%c",k);
        }
    }
}