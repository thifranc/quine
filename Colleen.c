#include<stdio.h>
/*
 * yo
 */
void print()
{
	char *s="#include<stdio.h>\n/*\n * yo\n */\nvoid print()\n{\n	char *s=\"\%s\";\n	printf(\"\%s\", s);\n}\nint main()\n{\n/*\n * ok\n */\n	print();	return 0;\n}";
	printf("#include<stdio.h>\n/*\n * yo\n */\nvoid print()\n{\n	char *s=\"%s\";\n	printf(\"%%s\", s);\n}\nint main()\n{\n/*\n * ok\n */\n	print();	return 0;\n}", s);
}
int main()
{
/*
 * ok
 */
	print();
	return 0;
}
