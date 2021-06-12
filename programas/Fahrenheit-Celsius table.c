#include <stdio.h>

/*
print Fahrenheit-Celsius table
*/

int main()
{
float fahr, celsius;
int lower, upper, step;

lower = 0; //lower limit of temperature table
upper = 300; //upper limit
step = 20; //step size

fahr = lower;

printf("FAHRENHEIT TO CELSIUS TABLE\n\nFAHR\tCELSIUS");
while (fahr <= upper){
        celsius = (5.0/9.0)*(fahr-32.0);
        printf("\n%3.0f\t%6.1f\n",fahr,celsius);
        fahr = fahr + step;
        }
}
