#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5];
    int i;
    int max,min, maxindex,minindex;
    printf("please enter the numbers inside the array\n");
    for(i=0; i<5; i++)
    {
        scanf("%d",&arr[i]);

    }
    max=min=arr[0];
    maxindex=0;
    minindex=0;
    for(i=0; i<5; i++)
    {

        if (arr[i]>max)
        {
            max=arr[i];
            maxindex=i;

        }
        if (arr[i]
                <min)
        {
            min=arr[i];
            minindex=i;

        }

    }

    printf(" max is %d present at index %d\n",max,maxindex);
    printf(" min is %d present at index %d\n",min,minindex);
    printf("array elements are\n");
    for (i=0; i<5; i++)
    {
        printf("%d\n",arr[i]);


    }
    int temp;
    for(i=0; i<5; i++)
    {
        for(int j=i+1; j<5; j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }

        }
    }

    printf("sorted array\n");
    for (i=0; i<5; i++)
    {
        printf("%d\n",arr[i]);


    }



return 0;
}
