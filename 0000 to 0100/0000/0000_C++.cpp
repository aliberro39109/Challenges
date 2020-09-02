#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str;
	int n;
	do
	{
		cin>> n;
	} while (n<=0);
	do
	{
		getline(cin,str);
	} while(str[0] == '\n' || str[0] == '\0');
	for(int i=0;i<n;i++)
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
	cout << str;
	return 0;
}
