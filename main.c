#include <stdio.h>
#include <string.h>

int main() {

    int age = 0;
    float cgpa = 0.0f;
    char grade;
    char name[30];
    

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your cgpa: ");
    scanf("%f", &cgpa);

    printf("Enter your Grade: ");
    scanf(" %c", &grade);
    getchar();

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    
    printf("%s\n", name);
    printf("%d\n", age);
    printf("%f\n", cgpa);
    printf("%c\n", grade);
    



    return 0;
}
