#include<cs50.h>
#include<stdio.h>

int check_input();
void mario_shape(int n);

int main()
{
    //getting height from user
    int height = check_input();
    
    //Drawing mario shape with height
    mario_shape(height);
    
    return 0;
}


//**************************************************functions*******************************

//      **check_input function**    to check if number already between 1 to 8 inclusive
int check_input()
{
    int n;
    
    do
    {
        n = get_int("Height: ");
    }
    while ((n < 1) || (n > 8));
    
    return n;
}

//      **mario_shape function**        to draw out the shape
void mario_shape(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int k = 0; k < n - i; k++)
        {
            printf(" ");
        }
        
        for (int j = 0 ; j < i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}