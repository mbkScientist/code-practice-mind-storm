#include<stdio.h>
#include<stdlib.h>

int arr[100];
int shiftL();
int main()
{
	int i=1,j,k,n,flagE=0,flagO=0,flagEp=0;

	//printf("Enter the size :");
	n=9;
	scanf("%d",&n);
	for(i=1;i<n+1;i++)
		arr[i]=i;
	//i=2;j=3;
		if(i%2==0)	flagEp=1;
	arr[n+1]=0;
	arr[n+2]=0;
	for(;arr[2]!=0;)
	{	
		
			printf("\nfirst array start\n");
		for(k=1;arr[k]!=0;k++)
				printf("%d ",arr[k]);	
			printf("%d\narray end\n",arr[k]);
		
		if(i%2==0)	flagEp=1;
		//else		flagO=1;
		printf("\nstart flagEp=%d flagE=%d flagO=%d\n",flagEp,flagE,flagO);	
		printf("start ***i=%d<----->j=%d***\n",i,j);
		for(i=2,j=3;arr[i-1]!=0;i++,j=j+2)
		{
			arr[i]=arr[j];
			if(arr[i]==0)
				break;
			//for(k=1;arr[k]!=0;k++)
			//	printf("%d ",arr[k]);
		}
		if(arr[i]!=1)
		{arr[i]=0;arr[i+1]=0;}
		
		printf("\nlast array start\n");
		for(k=1;arr[k]!=0;k++)
				printf("%d ",arr[k]);	
			printf("%d\narray end\n",arr[k]);

		printf("end ***i=%d<----->j=%d***\n",i,j);

		if(i%2==0)	flagE=1;
		else		flagO=1;
		printf("\nend one flagEp=%d flagE=%d flagO=%d\n",flagEp,flagE,flagO);
		if(flagEp && i>2)
			if(flagE||flagO)
		{	i=shiftL();flagE=0;flagEp=0;flagO=0;}
		 //{ flagEp=flagE;flagE=0;flagO=0;}
		// printf("\nflagEp=%d",flagEp);
		flagEp=flagE;
		printf("\nend two flagEp=%d flagE=%d flagO=%d\n",flagEp,flagE,flagO);
		
		//printf("-%d-,-%d-\t---%d---\n",arr[k],arr[k+1],i);
		
		//if((j-1)%2==0&& arr[i]==0&&arr[2]!=0 && arr[j-1]==0)	shiftL();
		//if(arr[i]==0&&i%2==0&&i>2)	shiftL();
	}
	printf("\nWinner %d\n",arr[1]);
	return 0;
}
int shiftL()
{
	int i;
	printf("\n<----inshift\n");
	for(i=1;arr[i]!=0;i++)	
	{	
		arr[i]=arr[i+1];
		printf("%d ",arr[i]);
	}
	arr[i]=0;printf("\nout of shift---->\n");
	//printf("_--%d--%d_\n",arr[i],i);
	return i-1;
}
