## Problem B. Borze

https://codeforces.com/contest/32/problem/B
227294083	Oct/09/2023 14:39UTC+6	eshat69	B - Borze	GNU C11	Accepted	30 ms	0 KB
### Code (C):


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
