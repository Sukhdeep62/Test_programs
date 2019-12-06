#include<stdio.h>

int iSum(int *arr, size_t L)
{
	int sum=0;
	for (int i=0;i<L;i++)
				{
					sum +=arr[i];
				}
	return (sum) ;
}

int main()
{
	int m;
	int loadarr[]={5,10,-32,78,256,1093,234,-22};
	m=sizeof(loadarr)/sizeof(loadarr[0]);
	printf("Sum of elements=%d\n",iSum(loadarr,m));
	printf("Number of elements=%d",m);
	return 0;
}
