#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[1024];
    scanf("%s", str);
    int i = 0;
    char comp[1024];
    char *temp = str;
    while (*temp != '\0') {
        if (*temp == '(' || *temp == '[' || *temp == '{') {
            comp[i++] = *temp;
        } else if (*temp == ')') {
            if (comp[i-1] == '(') {
                i--;
            } else {
                printf("false");
                return 0;
            }
        } else if (*temp == ']') {
            if (comp[i-1] == '[') {
                i--;                 
            } else {                 
                printf("false");     
                return 0;
            }                        
        } else if (*temp == '}') {
            if (comp[i-1] == '{') {
                i--;                 
            } else {                 
                printf("false");     
                return 0;
            }                        
        }
        temp++;
    }
    if (i == 0) {
        printf("true");
    } else {
        printf("false");
    }
    return 0;
}
