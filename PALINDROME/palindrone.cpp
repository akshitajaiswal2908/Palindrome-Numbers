#include<stdio.h>
int main()
{
	int n;
	printf("enter n: ");
	scanf("%d",&n);
	int temp=n;
	int rev=0;
	while(n!=0)
	{
		int ld=n%10;
		
		rev=rev*10+ld;
		n=n/10;
	}
    printf("%d\n",rev);
    if(temp==rev){
    	printf("yes its a palindrone");
	}
	else 
	{
		printf("no its not palindrone");
	}
	return 0;
	
}
