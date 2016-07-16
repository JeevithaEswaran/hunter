#include <stdio.h>

int main(void) 
{
    int a[6],b[3],i,j,count=0,sum=0;
    printf("\nEnter the elements of A:");
    for(i=0;i<6;i++)
    scanf("\n%d",a[i]);
    printf("\nEnter the elements of B:");
    for(i=0;i<3;i++)
    scanf("\n%d",a[i]);
    for(i=0;i<3;i++)
    {
        for(j=0;j<6;j++)
        {
            if(b[i]==a[j])
            {
                count++;
            }
        }
        if(count>=1)
            sum++;
    }
    if(sum==3)
    {
    printf("\nArray B is a substring of array A");
    }
    
	return 0;
}



