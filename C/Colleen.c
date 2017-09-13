#include<stdio.h>
/*
 * yo
 */
void print()
{
char *s="#include<stdio.h>%c/*%c * yo%c */%cvoid print()%c{%cchar *s=%c%s%c;%cprintf(s, 10, 10, 10, 10, 10, 10, 34, s, 34, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10);%c}%cint main()%c{%c/*%c * ok%c */%cprint();%creturn 0;%c}%c";
printf(s, 10, 10, 10, 10, 10, 10, 34, s, 34, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10);
}
int main()
{
/*
 * ok
 */
print();
return 0;
}
