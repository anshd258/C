

#include<stdio.h>
main()
{
    char a[200],c;
    int i,l=0;
    for(i=0;(c=getchar())!='\n';i++)
        {
            a[i]=c;
        }
        a[i]='\0';
        for(i=0;a[i] !='\0';i++)
    {
        l++;
    }
    printf("\n");
    for(i=l;i>=0;i--)
    {
        printf("%c",a[i]);
    }

}
