#include <stdio.h>

int main() {

    char choice = '\0';
    float fahrenheit = 0.0f;
    float celsius = 0.0f;

    printf("Temperature Converison Program\n");
    printf("C. Celsius to Fahrenhiet\n");
    printf("F. Fahrenhiet to Celsius\n");
    printf("Is the temperature in Celsius(C) or Fehrenheit(F)?: ");
    scanf("%c", &choice);
     if(choice == 'C'){
        printf("Enter the Temperature in Celsius: ");
        scanf("%f", &celsius);
        fahrenheit = (celsius * 9/5) + 32;
        printf("%.1f Celsius is Equal to %.1f Fehrenheit\n", celsius, fahrenheit);


     }
     else if(choice == 'F'){
        printf("Enter the Tempeature in Fehrenheit: ");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32) * 5 / 9;
        printf("%.1f Fahrenheit is Equal to %.1f Celsius\n", fahrenheit, celsius);



     }
     else{
        printf("Invalid choice! Please slelect C or F\n");
     }

     return 0;

}