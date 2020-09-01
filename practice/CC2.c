#include <stdio.h>

int main() {
    int radius;
    
    printf("please enter a radius: ");
    scanf("%i" , &radius);
    
    printf("%i\n", radius);
    printf("The diameter of your circle is: %i\n", radius*2 );

    return 0;
}
