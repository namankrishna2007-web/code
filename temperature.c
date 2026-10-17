#include<stdio.h>

int main(){
    int choice;
    printf("Enter the choice:");
    scanf("%d", &choice);





    if(choice == 1){
        float celsius;
        printf("Enter temperature in Celsius: ");
        scanf("%f", &celsius);
        float fahrenheit = (celsius * 9/5) + 32;
        printf("%.2f Celsius is equal to %.2f Fahrenheit\n", celsius, fahrenheit);
    }
    else if(choice == 2){
        float fahrenheit;
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &fahrenheit);
        float celsius = (fahrenheit - 32) * 5/9;
        printf("%.2f Fahrenheit is equal to %.2f Celsius\n", fahrenheit, celsius);
    }
    else{
        printf("Invalid choice\n");
    }
    return 0;
}