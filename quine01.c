#include <stdio.h>

char* s = "#include <stdio.h>%c%cchar* s = %c%s%c;%c%cint main() {%c%c%c%cprintf(s, 10, 10, 34, s, 34, 10, 10, 10, 10, 10);%c%c%c%creturn 0;%c}%c";

int main() {
    printf(s, 10, 10, 34, s, 34, 10, 10, 10, 10, 10);
    return 0;
}