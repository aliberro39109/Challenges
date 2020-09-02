#include <stdio.h>
#include <stdlib.h>
int main()
{
	char str[255];
	int n,i;
	do
	{
		scanf("%d",&n);
	} while (n<=0);

	scanf(" %[^\n]",str);

	for(i=0;i<n;i++)
	{
		if(str[i] >='a' && str[i] <= 'z')
		{
			str[i] += 3 - 'a';
			str[i] %= 26;
			str[i] += 'a';
		}
		else if (str[i] >='A' && str[i] <= 'Z')
		{
			str[i] += 3 - 'a';
			str[i] %= 26;
			str[i] += 'a';
		}
	}
	printf("%s",str);
	return 0;
}
