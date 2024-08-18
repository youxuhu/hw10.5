#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string>
void Squeeze(char s[], char c);
int main(void)
{
	char str[20], ch;
	printf("Please input a string:");
	fgets(str, 20, stdin);
	printf("Please input a character:");
	ch = getchar();
	Squeeze(str, ch);
	printf("Result:%s\n", str);
	return 0;
}
void Squeeze(char s[], char c)
{
	int i, j;
	for (i = j = 0; s[i] != '\0'; i++);
	{
		if (s[i] != c)
		{
			s[j] = s[i];
			j++;
		}
	}
	s[j] = '\0';
}