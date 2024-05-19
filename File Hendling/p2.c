#include <stdio.h>

int main() {
	
    FILE *filePointer;
    int number;

    filePointer = fopen("divisible_numbers.txt", "w");
    if (filePointer == NULL) {
        printf("Error creating file.\n");
        return 1;
    }


    for (number = 1; number <= 50; number++) {
        if (number % 3 == 0 && number % 5 == 0) {
            fprintf(filePointer, "%d\n", number);
        }
    }

    printf("Numbers divisible by both 3 and 5 between 1 and 50 are written to 'divisible_numbers.txt'.\n");
    
    fclose(filePointer);

    return 0;
}

