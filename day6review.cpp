#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    scanf("%d", &t);
    
    for (int i; i < t; i++) {
        char s[100000];
        scanf("%s", s);
        
    int length = strlen(s);
    for (int k = 0; k < length; k+=2) {
        printf("%c", s[k]);
    }
    printf(" ");
    for (int j = 1; j<length; j+=2) {
        printf("%c",s[j]);
    }
    printf("\n");
    }
    return 0;
}
