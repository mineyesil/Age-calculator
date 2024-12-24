#include <stdio.h>
#include <time.h>
#include <cs50.h>

int main (void)
{
    int birth_year = get_int( "Birth Year: " );
    int current_year = 1970+(time(NULL)/(365*24*60*60));
    printf(" you are %i years old\n", current_year - birth_year );
}

