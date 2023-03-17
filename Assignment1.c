//Write a C program that allows the user to enter 'N' numbers and find the total positive numbers and total negative numbers using a for loop.


 include<stdio.h>
 int countPositiveNumbers(int* arr, int n)
{
 int positive_count = 0;
 int i;
 for (i = 0; i < n; i++) {
  if (arr[i] > 0)
   positive_count++;
 }
 return positive_count;
}
int countNegativeNumbers(int* arr, int n)
{
 int negative_count = 0;
 int i;
 for (i = 0; i < n; i++) {
  if (arr[i] < 0)
   negative_count++;
 }
 return negative_count;;
  void printArray(int* arr, int n)
{
 int i;
  printf("Array: ");
 for (i = 0; i < n; i++) {
  printf("%d ", arr[i]);
 }
 printf("\n");
}
int main()
{
 int arr[] = { 2, -1, 5, 6, 0, -3 };
 int n;
 n = sizeof(arr) / sizeof(arr[0]);
 
 printArray(arr, n);
 
 printf("Count of Positive elements = %d\n",
  countPositiveNumbers(arr, n));
 printf("Count of Negative elements = %d\n",
  countNegativeNumbers(arr, n));
 
 return 0;
}
