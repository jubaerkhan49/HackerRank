#include <stdio.h>
#include <string.h>
int main()
{
	char str_1[1001], str_2[1001];
	gets(str_1);
	gets(str_2);
	
	if (strcmp(str_1, str_2) == 0)
	{
		printf("String one and String two both are equal");
	}
	else if (strcmp(str_1, str_2) > 0)
	{
		printf();
	}
	
	
	
}