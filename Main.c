/* Name: Saloni Mhadgut 
Roll No:- 64 
Experiment No. 1 
Title: Program to implement Selection Sort Batch: SECMPN- B3 
*/ 
#include <math.h> 
#include<stdio.h> 
#include<stdlib.h> 
void printArray(int arr[], int n) 
{ 
int i; for (i = 0; i < n; i++) 
printf("%d ", arr[i]); 
printf("\n"); 
} 
void insertionSort(int arr[], int n) 
{ 
int i, key, j; 
for (i = 1; i < n; i++) 
{ 
key = arr[i]; j = i - 1; 
while (j >= 0 && arr[j] > key) 
{ 
arr[j + 1] = arr[j]; 
j = j - 1; 
} 
arr[j + 1] = key; 
printf("\nPass %d:", i); 
printArray(arr, n); 
} 
} 
void selectionSort(int arr[], int n) 
{ 
int i, j, small; 
for (i =0; i < n - 1; i++) 
{ 
small = i; 
for (j = i + 1; j < n; j++) 
if (arr[j] < arr[small]) small= j;
int temp = arr[small]; 
arr[small] = arr[i]; 
arr[i] = temp; 
printf("\nPass%d: ", i); 
printArray(arr, n); 
} 
} 
int main() 
{ 
int n, choice; 
printf("\n\n\t\t ------------------------------"); 
printf("\n\t\t*** INSERTION / SELECTION SORT *** "); 
printf("\n\t\t ------------------------------"); 
printf("\nENTER THE NUMBER OF ELEMENT YOU WISH TO INSERT: "); scanf("%d",&n); 
int arr[n]; 
printf("\nENTER %d ELEMENTS: ", n ); 
for (int i = 0; i < n; i++) 
scanf("%d",&arr[i]); 
printf("\n1.INSERTION SORT 2.SELECTION SORT \nEnter choice: "); scanf("%d", &choice); 
switch (choice) 
{ 
case 1: 
insertionSort(arr, n); 
printf("\n\nRESULT: "); 
printArray(arr, n); 
break; 
case 2: 
selectionSort(arr, n); 
printf("\n\nRESULT: "); 
printArray(arr, n); break; 
} 
return 0; 
} 
