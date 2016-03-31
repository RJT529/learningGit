#include<stdio.h>
#include<time.h>

void main()
{
	clock_t start,end;
	double cpu_time_used;
	unsigned char a[1000000];
	int n, i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		a[i]=(char)(rand()%255);

	for(i=0;i<n;i++)
                printf("%d\n",a[i]);
	 printf("-----------------\n");
	start=clock();
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				int t=a[j];
				a[j]=a[i];
				a[i]=t;
			}	
		}
	}
	end=clock();
	cpu_time_used=((double)(end-start))/CLOCKS_PER_SEC;
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
	printf("time taken:%lf\n",cpu_time_used);
}
