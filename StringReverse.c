#include <stdio.h>
#include <stdlib.h>

int main()
{
    char text[30];
    int i,j,n;
    puts("Enter the Text:");
    gets(text);
    n=strlen(text);
    for(i=n;i>=0;i--)
    {
       if(text[i-1]==' '||text[i-1]==NULL )
       {
           for(j=i;text[j]!=' ';j++)
           {
               printf("%c",text[j]);
           }
       }

       printf(" ");


    }

    getche();
}
