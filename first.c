#include <stdio.h>

int main(int argc, char *argv[]) {
    
    if(x < 2 || argc != 1) {
        printf("Error. Please enter a positive integer larger than 2 next time!");
        return 0;
    }

    int x = argc[0];

    int numbers [x-1];

    for(int i = 0; i <= x-2; i++){
        numbers[i] = i+2;
    }

    int counter = 0;
    int numprimes = 0;
    int cprime;

    while(counter<=x-2){
        cprime = numbers[counter];

        if(cprime == -1){
            counter++;
            continue;
        }

        //else:
        numprimes++;

        for(int i = counter+1; i <= x-2; i++){
            if(numbers[i]%cprime==0){ //found a non-prime
                numbers[i] = -1;
            }
        }
        counter++;
    }

    printf("The number of primes smaller than %d: %d \n", x, numprimes);

    int num;

    for(int i = 0; i <= x-2; i++){
        num = numbers[i];
        if(num != -1){
            printf("%d\n",num);
        }
    }

    return 0;
}