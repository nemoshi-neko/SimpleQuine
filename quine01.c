#include <stdio.h>

char *s = "\nchar *s = %c%s%c;\n\n int main(){\nprintf(%cinclude <stdio.h>%c);\nprintf(s, 34, 34, 34, s, 34);\nreturn 0;\n}";

int main() {
    printf("include <stdio.h>");
    printf(s, 34, s, 34, 34, 34);
    return 0;
}