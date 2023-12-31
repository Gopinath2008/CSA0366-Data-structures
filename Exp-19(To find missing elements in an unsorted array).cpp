#include <stdio.h>
void findMissingElements(int arr[], int size, int min, int max) 
{
	int i;
    int hash[max-min+1];
    for(i=0;i<max-min+1;i++) 
	{
        hash[i]=0;
    }
    for(i=0;i<size;i++)
	{
        hash[arr[i]-min]++;
    }
    printf("Missing elements: ");
    for(i=0;i<max-min+1;i++)
	{
    	if(hash[i]==0) 
		{
            printf("%d ",i+min);
        }
    }
    printf("\n");
}
int main()
{
	int arr[] = {3, 7, 1, 9, 10, 5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int min=arr[0],max=arr[0];
    for(int i=1;i<size;i++)
	{
        if(arr[i]<min)
		{
            min=arr[i];
        }
        if(arr[i]>max)
		{
            max=arr[i];
        }
    }
    findMissingElements(arr,size,min,max);
    return 0;
}
