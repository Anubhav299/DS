#include <stdio.h>
#include <string.h>

int main()
{
	char str[100];
	scanf("%[^\n]s", str);
	int alpha[26]={0};
	int len = strlen(str),i=0;
	while(i!=len)
	{
		alpha[str[i++] - 'a'] = 1;
	}

	for (int i = 0; i < 26; i++)
	{
		if(alpha[i]==1)
		{
			printf("%c", (char)(i+97));
		}
	}
}
