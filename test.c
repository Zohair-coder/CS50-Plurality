#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    int votes;
}
candidate;

void print_array_function(const candidate arr[]);



int main(void)
{
    candidate candidates[3];
    candidates[0].votes = 5;
    candidates[1].votes = 3;
    candidates[2].votes= 1;
    print_array_function(candidates);
}

void print_array_function(const candidate arr[])
{
    for (int i = 0; i < 3; i++)
    {
        printf("%i\n", arr[i].votes);
    }
}