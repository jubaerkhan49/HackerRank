#include <stdio.h>
int main()
{
	char s[100], s1[100];
	int i = 0;
	gets(s);
	gets(s1);
	
	for (i = 0; s[i] == s1[i]; ++i);
	printf("%d", i);
	return 0;