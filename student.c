#include "student.h"
#include <stdio.h>


void swap(int *a, int *b) {
  int temp = 0;
  temp = *a; // temp takes value of a 
  *a = *b; // a takes value of b
  *b = temp; // b takes value of temp (previous value of a )
  
}

void modifyarray(int array[], int length) {
  for(int x = 0; x < length; x ++){ // looping through array
    if (array[x] < 0){ // if the element is less than 0 
      array[x] = (array[x]*-1); // mutliply by one
    }
  }
  
}

int nthtrifibonacci(int n) {
  if (n == 0){ // base cases if 0,1 or 2 
    return 0;
  }
  else if(n==1 || n==2){
    return 1;
  }
  else{
    return nthtrifibonacci(n-1) + nthtrifibonacci(n-2) + nthtrifibonacci(n-3); // else use recursion - eventually lands at base case 
  }
}

double mean(int array[], int length) {
  //Enter code here
  int sum = 0;
  for(int x = 0; x < length; x ++){ //goes through list
    sum += array[x]; // adds every element of the list to a sum
  }
  return sum/length; // divides total sum by length giving average 
}

void insertionsort(int array[],int length) {
  for(int x = 0; x < length; x ++){ // go through list
    int current = x; // capture current val and value behind it
    int back = x-1;

    while(back >= 0 && array[back] > array[current]){ // while the behind value is within the list and the behind value is greater than the value next to it
      int temp = array[back]; 
      array[back] = array[current]; // swap the values - logic borrowed from swap method
      array[current] = temp;
      current = current-1; // move both current and back one place behind - to recheck and reswap if needed
      back = back -1;
    }
  }
  
}

int reverseinteger(int n) {
  int multiplier = 1; 
  if(n < 0){ // if number is less than 0 - make it positive - and remember to multiply it by -1 in the end
    n = n*-1;
    multiplier = -1;
  }
  int finalnum = 0;
  while (n>0){
    finalnum = (finalnum*10) + n%10; // while n is > 0,  multiply the finalnum by 10 - basically adding ___ place to the end - and add the modulus of n - adding the value to the final int
    n = n/10; // decrease the length of n - by removing last digit 
  }
  return finalnum * multiplier;
}

int palindrome(char str[], int length) {
  //Enter code here
  for(int x = length-1; x >= 0; x--){ // loops backwards
    if (str[x] != str[(length-1)-x]){ // checks if character is equiv to other character in opposite position of string
      return 0; // if not return 0
    }
  }
  return 1; // if completely passes - return 1 
}

