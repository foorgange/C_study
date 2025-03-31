#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
int isPrime(int x, int knowPrimes[], int numberofPrimes);

int main(void)
{
    const int number = 100;

    int prime[number];
    prime[0] = 2;
    int count = 1;
    int i = 3;
    while(count < number){
        if(isPrime(i, prime, count)){
            prime[count++] = i;
        }
        i++;
    }
    for(i=0; i<number; i++){
        printf("%d ", prime[i]);
        if((i+1)%5){
            printf("\t");
        }else{
            printf("\n");
        }
        }
    system("pause");
    return 0;
}
int isPrime(int x, int knowPrimes[], int numberofPrimes)
{
    int ret = 1;
    int i;
    for(i=0; i<numberofPrimes; i++){
        if(x % knowPrimes[i] == 0){
            ret = 0;
            break;
        }
    }
    return ret;
}