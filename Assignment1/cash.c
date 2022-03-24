#include<cs50.h>
#include<stdio.h>

double get_positive();
void coins(int n);

int main()
{
    //getting money that user takes in dollars
    double dollars = get_positive();
    
    //changing from dollars to cents
    int cents = dollars * 100;
    
    //calling coins function
    coins(cents);
    
    return 0;
}


//*************************************functions*************************************

//      **get_positive function**        to check if the input is positive
double get_positive()
{
    double n;
    
    do
    {
        n = get_double("Change owed: ");
    }
    while (n < 0);
    
    return n;
}


//      **coins function**           to get number of coins
void coins(int n)
{
    //number of quarters
    int quarters = n / 25;
    n %= 25;
    
    //number of dimes
    int dimes = n / 10;
    n %= 10;
    
    //number of nickels 
    int nickels = n / 5;
    n %= 5;
    
    //number of pennies 
    int pennies = n;
    
    printf("%i\n", (quarters + dimes + nickels + pennies));
    
}