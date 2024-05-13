#include <stdio.h>



int main () {

    char s[256] = "", str[256] = "";

    scanf ("%[aeiou]", s); // le somente A E I O U
    printf ("String (s): %s\n", s);
    scanf ("%[^A-Z]", str); // nao le letra maiuscula
    printf ("String (str): %s\n", str);

    return 0;
}
