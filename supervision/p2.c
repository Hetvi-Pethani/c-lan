#include <stdio.h>
struct Student {
    int roll_no;
    char name[50];
    int chem_marks;
    int maths_marks;
    int phy_marks;
};

int main() {
    struct Student s[5];
    int i;

    
    for (i = 0; i < 5; i++) {
        printf("Enter details of Student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &s[i].roll_no);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Chemistry Marks: ");
        scanf("%d", &s[i].chem_marks);
        printf("Mathematics Marks: ");
        scanf("%d", &s[i].maths_marks);
        printf("Physics Marks: ");
        scanf("%d", &s[i].phy_marks);
        printf("\n");
    }

    
    printf("Mark Sheets:\n");
    for (i = 0; i < 5; i++) {
        printf("Student %d - Roll No: %d, Name: %s\n", i + 1, s[i].roll_no, s[i].name);
        printf("Chemistry Marks: %d\n", s[i].chem_marks);
        printf("Mathematics Marks: %d\n", s[i].maths_marks);
        printf("Physics Marks: %d\n", s[i].phy_marks);


        float total_marks = s[i].chem_marks + s[i].maths_marks + s[i].phy_marks;
        float percentage = (total_marks / 300) * 100;
        printf("Percentage: %.2f%%\n", percentage);
        printf("\n");
    }

}

