#include <stdio.h>

/* print Farhrenheit-Celcius table
 * for farhr = 0, 20, ..., 300 */

main(){
    float fahr, celcius;
    int lower, upper, step;

    lower = 0; // lower limit of temperature table 
    upper = 300; // upper limit
    step = 20; // step size

    fahr = lower;
   
    printf("%3c %6c\n", 'F', 'C');

    while (fahr <= upper){
        celcius = 5.0 * (fahr-32)/9.0;
        printf("%3.0f %6.1f\n", fahr, celcius);
        fahr = fahr + step;
    }
}
