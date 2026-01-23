#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Name
    string name = get_string ("What is your name? ");

    // Age
    int age = get_int ("How old are you? ");

    // Hometown
    string hometown = get_string ("Where are you from? ");

    // Phone number
    string number = get_string ("what's your phone number? ");

    printf("My new friend's name is %s, they are %i year(s) old, they are from %s, and their phone number is %s\n", name, age, hometown, number);


}
