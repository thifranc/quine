#include <stdio.h>
#include <stdlib.h>
#include <string.h>
extern const char *__progname;
int main(){
int i = 5;
int next;
if (strcmp(__progname,"Sully") == 0)
next = i;
else
next = i - 1;
if (i > 0){
char title[100];
char *s="#include <stdio.h>%c#include <stdlib.h>%c#include <string.h>%cextern const char *__progname;%cint main(){%cint next;%cint i = %d;%cif (strcmp(__progname,%cSully%c) == 0)%cnext = i;%celse%cnext = i - 1;%cif (i > 0){%cchar title[100];%cchar *s=%c%s%c;%csnprintf(title, 100, %cSully_%%d.c%c, next);%cFILE *fd = fopen(title, %cw%c);%cfprintf(fd, s, 10, 10, 10, 10, 10, 10, next, 10, 34, 34, 10, 10, 10, 10, 10, 10, 34, s, 34, 10, 34, 34, 10, 34, 34, 10, 10, 34, 34, 10, 10, 10, 10, 10, 10);%csnprintf(title, 100, %cgcc -o Sully_%%d Sully_%%d.c && ./Sully_%%d%c, next, next, next);%cfclose(fd);%csystem(title);%c}%creturn 1;%c}%c";
snprintf(title, 100, "Sully_%d.c", next);
FILE *fd = fopen(title, "w");
fprintf(fd, s, 10, 10, 10, 10, 10, 10, next, 10, 34, 34, 10, 10, 10, 10, 10, 10, 34, s, 34, 10, 34, 34, 10, 34, 34, 10, 10, 34, 34, 10, 10, 10, 10, 10, 10);
snprintf(title, 100, "gcc -o Sully_%d Sully_%d.c && ./Sully_%d", next, next, next);
fclose(fd);
system(title);
}
return 1;
}
