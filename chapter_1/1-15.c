#include <stdio.h>

int convert_to_celcius(int fahr);

int main(){
    int fahr;
    float celc;

    printf("%3c %8c\n", 'F', 'C');
    printf("-------------\n");
    
    for (fahr = 0; fahr <= 300; fahr += 20){
        celc = convert_to_celcius(fahr);
        printf("%3d %8.1f\n", fahr, celc);
    }

    return 0;
}


int convert_to_celcius(int fahr){
    int celc;
    celc = 5.0/9 * (fahr-32);
    return celc;
}
