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
        //this loop for spaces
        for (int spaces = 0; spaces < n - i; spaces++)
        {
            printf(" ");
        }
        
        int symbol_end = 2 * i + 1;
        
        for (int symbol = 0 ; symbol < symbol_end; symbol++)
        {
            if (symbol == (symbol_end / 2))
            {
                printf("  ");
                continue;
            }
            printf("#");
        }
        printf("\n");
    }
}