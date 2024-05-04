#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main(){

    int i, vowels =0, upper =0, lower=0, digit=0, splChar=0, words=0, art=0;
    char str[100];

    printf("Enter a String: ");
    gets(str);
    puts(str);

    for (i=0; i<strlen(str); i++){

        if ( isupper(str[i])) upper++;
        else if  (islower(str[i]))lower++;
        else if  (isdigit(str[i])) digit++;
        else splChar++;
        str[i] = tolower(str[i]);
        if ( i == 'a' || i == 'e' ||i == 'i' ||i == 'o' || i == 'u' ) vowels++ ;
    }
    printf("\
           Number of Upper cased alphabets: %d\n\
           Number of Lower cased alphabets: %d\n\
           Number of Digits               : %d\n\
           Number of Special characters   : %d\n\
           Number of Vowels               : %d\n",
           upper, lower, digit, splChar, vowels);

    for (i=0; i<strlen(str); i++){
        if (str[i] == '.' || str[i] == ' ') words++;
    }
    printf("%d", words);
    for (i=0; i<strlen(str); i++){
        if (str[i] == 'a'){
            if (str[i-1] == ' ' && (str[i+1] == ' ' || str[i-1] == 'n'))
                art++;
        }
        else if (str[i] == 't'){
            if ( str[i-1] == ' ' && str[i+1] == 'h' && str[i+2] == 'e') art++;
        }
    }
    printf("%d", art);
}

