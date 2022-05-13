#include<stdio.h>
void main()
{
	unsigned int a,count = 0,even_count = 0;
	printf("Enter the Number in HexaDecimal format:\n");
	scanf("%x",&a);
	int i;
	for(i = 0;i < 31;i++)
	{
		if(a & (1 << i))
		{
			printf("changed")
			count++;
		}
		else if(count % 2 == 0 && count != 0)
		{
			even_count++;
			count = 0;
		}
		
         }
	 printf("No of Ones in even_count is %d:\n",even_count);

}
