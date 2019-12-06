#include<stdio.h>

int iLargest(int *arr, int L)
{
	int large;
	large =arr[0];
	for (int i=0;i<L;i++)
	{
		if (large<arr[i+1] )
			{
			large = arr[i+1];
			}
	}

	return (large) ;
}

int main()
{
	int m;
	int loadarr[]={5,10,-32,78,256,1093,234,-22};
	m=sizeof(loadarr)/sizeof(loadarr[0]);
	printf("Largest integer =%d\n",iLargest(loadarr,m));
	printf("Number of elements=%d",m);
	return 0;
}
