//moosa shehzad abbasi
//U37033529
//this program calculates the items price for the next 5 years using the given inflation rate
#include <stdio.h>

int main(){
    
    double price; int year = 2024;       
    printf("Enter the price of the item in 2024:");
    scanf("%lf", &price);   //the user enters the price of the item in 2024
    for (year = 2025; year < 2030; year++){  //a for loop which starts from year 
        price = (0.03 * price) + price;    //calculates the new price by calculating interest and adding that to the original price.
        printf("The anticipated price in %d is %.2lf \n", year, price);  //prints the new price
        
    }

    return 0;
}
