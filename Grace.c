# include <stdio.h>
# define FT(x)int main(){\
char *s="# include <stdio.h>%c# define FT(x)int main(){%c%cchar *s=%c%s%c;%c%cfprintf(fopen(%cGrace_kid.c%c, %cw%c), s, 10, 92, 10, 34, s, 34, 92, 10, 34, 34, 34, 34, 92, 10, 10, 10);%c%c}%cFT()%c";\
fprintf(fopen("Grace_kid.c", "w"), s, 10, 92, 10, 34, s, 34, 92, 10, 34, 34, 34, 34, 92, 10, 10, 10);\
}
FT()
