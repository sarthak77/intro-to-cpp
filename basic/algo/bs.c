#include<stdio.h>
int main ()
{
	int x,n;
	int i;
	int arr[100];
	scanf("%d%d",&x,&n);

	printf("enter sorted array\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);

	int low=0,mid,high=n-1;
	int found=-1;

	while(low<=high)
	{
		mid=(low+high)/2;
		printf("%d\n",arr[mid]);

		if(arr[mid]==x)
		{
			found=x;
			break;
		}
		if(arr[mid]>x)
			high=mid-1;
		if(arr[mid]<x)
			low=mid+1;
	}

	if(found!=-1)
		printf("number found at position %d\n",mid+1);
	else
		printf("number not found\n");

return 0;
}
