#include <stdio.h>

int main() {
    char l = 'A';
    int i,j, n = 2;

    for (i = 0; i < 5; i++) {
        for (j = 0; j <= i; j++) {
            if (i % 2 == 0) {
                if (j % 2 == 0) {
                    printf("%c", l++);
                } else {
                    printf("%d", n++);
                }
            } else {
                if (j % 2 == 0) {
                    printf("%d", n++);
                } else {
                    printf("%c", l++);
                }
            }
        }
        printf("\n");
    }

    
}
