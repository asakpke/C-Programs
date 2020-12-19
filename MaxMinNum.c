#include <stdio.h>

int main()
{
	int num1,
		num2,
		num3;
		
	printf("Input three numbers (i.e 1 2 3 press enter key) which would be stored at num1, num2 and num3 variables respectively: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	
	int max_val = num2,
		max_var = 2,
		min_val = num1,
		min_var = 1;
	
	if (num1 > num2)
	{
		max_val = num1;
		max_var = 1;
		min_val = num2;
		min_var = 2;
	}
	
	if (max_val < num3)
	{
		max_val = num3;
		max_var = 3;
	}
	
	if (min_val > num3)
	{
		min_val = num3;
		min_var = 3;
	}
	
	printf("Maximun value is %d which is stored at variable num%d\n",max_val,max_var);	
	printf("Minimum value is %d which is stored at variable num%d\n",min_val,min_var);
	
	return 0;
}
