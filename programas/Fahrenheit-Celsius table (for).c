#include <stdio.h>

int main()
{
        int fahr;


        printf("FAHRENHEIT TO CELSIUS TABLE\n\nFAHR\tCELSIUS");

        for (fahr = 0; fahr <= 300; fahr = fahr + 20)
                printf("\n%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
