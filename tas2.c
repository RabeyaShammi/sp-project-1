#include<stdio.h>
#include<string.h>

int main(){
    char str1[1000], str2[1000];
    int i,j=0,len;

    printf("Input string: ");
    gets(str1);

    len = strlen(str1);

    for(i=0; i<len; i++){
        if(str1[i] != ' '){
            str2[j++] = str1[i];
        }

    }
    str2[j] = '\0';
    printf("\n%s", str2);
    return 0;
}
RabeyaShammi
