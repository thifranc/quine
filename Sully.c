#include <stdio.h>
#include <stdlib.h>
int main(){
int i = 5;
if (i >= 0){
char title[100];
snprintf(title, 100, "Sully_%d.c", i);
 char *s= "#include <stdio.h>%c#include <stdlib.h>%cint main(){%cint i = %d;%cif (i > 0){%cchar title[100];%csnprintf(title, 100, %cSully_%%d.c%c, i);%c char *s= %c%s%c;%cFILE *fd = fopen(title, %cw%c);%cfprintf(fd, s, 10, 10, 10, i - 1, 10, 10, 10, 34, 34, 10, 34, s, 34, 10, 34, 34, 10, 10, 34, 34, 10, 10, 10, 10);%cfclose(fd);snprintf(title, 100, %cgcc -o Sully_%%d Sully_%%d.c && ./Sully_%%d%c, i, i, i);%csystem(title);%c}%creturn 1;%c}";
 FILE *fd = fopen(title, "w");
fprintf(fd, s, 10, 10, 10, i - 1, 10, 10, 10, 34, 34, 10, 34, s, 34, 10, 34, 34, 10, 10, 34, 34, 10, 10, 10, 10);
fclose(fd);
snprintf(title, 100, "gcc -o Sully_%d Sully_%d.c && ./Sully_%d", i, i, i);
system(title);
}
return 1;
}
