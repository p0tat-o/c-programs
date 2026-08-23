#include <stdio.h>
#include <stdbool.h>

int main() {
    float price = 10.00;
    bool isStudent = true; // 10%
    bool isSenior = true; // 20%



    if(isStudent) {
        if(isSenior) {
            printf("You get a Student discount of 10%%\n");
            printf("You get a Senior discount of 20%%\n");
            price = price * 0.7;
        }
        else{
            printf("You get a Student discount of 10%%\n");
            price = price * 0.9;

        }
        
        

    }
    else{
        if(isSenior) {
            printf("You get a Senior discount of 20%%\n");
            price = price * 0.8;
        }
    }
    
    printf("The price of a ticket is: $%.2f\n", price);

}