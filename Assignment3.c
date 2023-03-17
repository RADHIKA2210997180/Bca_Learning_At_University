//Can you help your digital design faculty in correcting the assignment on number conversions by writing a program to convert a decimal number to its binary equivalent using a while loop.
//Example, lets say input is 7, output should be 111

#include <stdio.h>
 
void decToBinary(int n)
{
    
    int binaryNum[32];
    int i = 0;
    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
   for (int j = i - 1; j >= 0; j--)
   printf("%d", binaryNum[j]);
}
  int main()
{
    int n = 17;
    decToBinary(n);
    return 0;
}
