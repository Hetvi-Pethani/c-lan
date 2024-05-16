#include <stdio.h>
void main() {
	
    FILE *even_file, *odd_file;
    int i;

    even_file = fopen("even_numbers.txt", "w");
    if (even_file == NULL) {
	    printf("create even");
	}
    odd_file = fopen("odd_numbers.txt", "w");
    if (odd_file == NULL) {
    	printf("create odd");
        fclose(even_file);
        }
    for (i = 50; i <= 70; i++) {
        if (i % 2 == 0) {
            fprintf(even_file, "%d\n", i);
        } else {
            fprintf(odd_file, "%d\n", i);
        }
    }
    fclose(even_file);
    fclose(odd_file);

    printf("file is successfull...");

    return 0;
}

