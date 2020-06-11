#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Creator Jeffrey Poe 
//Assignment One
// COP 2220 

int main(){
    //Printing my Full Name, creating a new line afterwards 
    printf("Jeffrey Poe\n");
    //Printing my full name, separated by a line
    printf("Jeffrey \nPoe\n");
    //Printing only my first name 
    printf("Jeffrey ");
    //Printing my last name separated by a space 
    printf("Poe\n");
    //New line

    //The integer toes is declared as an Integer
    int toes = 10;
    //Printing The Current Value of Toes
    printf("%i \n",toes);
    //Printing the value of toes after being multplied by two
    printf("%i \n",toes*2);
    //Printing the value of toes after being squared
    printf("%f \n",pow(toes, 2));
    //Declares faren as Int for the user input
    int faren;

    //Asks for a number input from the user
    printf("Enter a Fahrenheit Temperature to be calculated to Celcius! \n");
    //Applies the value of input to faren
    scanf("%i", &faren);
    //Celc takes on a value and converts faren
    double celc = ((double)(faren - 32)*5)/9 ;
    //Print statement displays number types and the new temperature to 2 decimal places
    printf("You typed %i Fahrenheit,", faren);
    printf(" Your Temperature in Celcius is %.2f.\n", celc);
};


