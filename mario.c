#include <stdio.h>
#include <cs50.h>

void print_row(int bricks);

int main(void)
{
    // Prompt/ask user for input
    int height;
    do
    {
        height = get_int("What is the height of your pyramid? ");
    }
    while(height < 1);

    // Print a pyramid of that height
    for (int i = 0; i < height; i++)

    {
        print_row(i + 1);
    }
}
void print_row(int bricks)
{
    for (int i = 0; i < bricks; i++)
    {
        printf("#");
    }
        printf("\n");
}
