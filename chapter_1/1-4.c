#include <stdio.h>
/* Convert celcius to Fahrenheit */

main(){
    float celcius, fahr;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celcius = lower;

    printf("%3.0c %6.1c\n", 'C', 'F');

    while (celcius <= upper){
        fahr = 9.0/5.0 * celcius + 32.0;
        printf("%3.0f %6.1f\n", celcius, fahr);
        celcius = celcius + step;
    }
}
