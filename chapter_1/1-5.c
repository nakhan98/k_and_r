#include <stdio.h>

// Print Fahrenheit to Celcius table in reverse

int main(){
    int fahr;

    printf("%3.0c %6.1c\n", 'F', 'C');

    for (fahr = 300; fahr >= 0; fahr = fahr - 20){
        printf("%3d %6.1f\n", fahr, 5.0/9.0 * (fahr-32));
    }

    return 0;
}
