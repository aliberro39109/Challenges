#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i;
	char c;
	int n;
	do
	{
		scanf("%d\n",&n);
	} while (n<=0);

	for(i=0;i<n;i++)
	{
		scanf("%c",&c);
		if(c >='a' && c <= 'z')
		{
			c += 3 - 'a';
			c %= 26;
			c += 'a';
		}
		else if (c >='A' && c <= 'Z')
		{
			c += 3 - 'a';
			c %= 26;
			c += 'a';
		}
		printf("%c",c);
	}
	return 0;
}
