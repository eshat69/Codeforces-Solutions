#include<stdio.h>
char s[205];
int main()
{
	scanf("%s",s);
	int i;
	for(i=0;s[i];i++){
        putchar(s[i]=='.'?'0':(s[++i]=='.'?'1':'2'));
	}
	return 0 ;
}
