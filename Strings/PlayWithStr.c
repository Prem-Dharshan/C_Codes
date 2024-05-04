#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main(){

    int i,j,k;
    char str[10], str1[10], dest[10];

    printf("Enter a String: ");
    gets(str);
    puts(str);

    printf("Enter a String: ");
    scanf("%[^\n]%s", str1);

    printf("%s\n", str1);

    for (i =0; i<10; i++) {
            printf("%c\n", str[i]);
    }
    printf("%d", i);

    for (j=0; j<i; j++){
        printf("%c", str[j]);
    }

    strcpy(dest, str1);
    printf("%s", dest);

    for ( k=0; k<i ; k++){
        printf("%c", toupper(str[k]));
    }

    for ( k=0 ; k<i)
}
