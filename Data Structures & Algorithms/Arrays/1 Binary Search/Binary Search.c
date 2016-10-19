# include <stdio.h>
int main()
{
	int n;
	printf("Enter The Number Of Elements : ");
	scanf("%d",&n);
	int a[n];
	printf("Enter The Elemets in sorted order:\n");
	int i,s;
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Enter The Element To Be Searched : ");
	scanf("%d",&s);
	int low,mid,high,flag=0;
	low=0;
	high=n-1;
	mid=(high+low)/2;
	
	while(low<=high)
	{
		
		if(a[mid]==s)
		{
			flag=1;
			break;
		}
		else
		{
			if(s>a[mid])
			{
				low=mid+1;
				mid=(low+high)/2;
			}
			else
			{
				high=mid-1;
				mid=(low+high)/2;
			}
		}
	}	
	

	if(flag==1)
	{
		printf("Element %d Found At %d position",s,mid+1);
	}
	else
	{
		printf("Element Not Found");
	}
}