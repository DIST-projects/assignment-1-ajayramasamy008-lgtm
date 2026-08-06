#include <stdio.h>

int main() {
    char str[100];
    int i = 0, v = 0, c = 0, d = 0, s = 0;

    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0') {
        char ch = str[i];

        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
           ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
            v++;
        else if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
            c++;
        else if(ch>='0'&&ch<='9')
            d++;
        else if(ch==' ')
            s++;

        i++;
    }

    printf("Vowels=%d\nConsonants=%d\nDigits=%d\nSpaces=%d", v, c, d, s);

    return 0;
}