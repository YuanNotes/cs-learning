#include <stdio.h>
int main()
{
	int arr[]={1,3,5,7,9,11,13};
	int index=11;
	int len=sizeof(arr)/sizeof(arr[0]);
	int left=0;
	int right=len-1;
	int mid;
	while (left<=right)
	{
		mid=(left+right)/2;
		if (index>arr[mid])
		{
			left=mid+1;
		}
		else if(index<arr[mid])
		{
			right=mid-1;
		}
		else
		{
			break;
		}
	}
	if(left>right)
	{
		printf("Œ¥’“µΩ");
	}
	else
	{
		printf("%d",mid);
	}
	
	return 0;
}

