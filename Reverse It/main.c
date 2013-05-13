//
//  main.c
//  Reverse It
//
//  Created by Sam Kovacs on 5/12/13.
//  Copyright (c) 2013 Sam Kovacs. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    // The first variable length represents how long the user's array is going to be.
    int length;
    
    // Here the user is asked how long their array is and then inputs the information, setting the input equal to the variable length.
    printf("Please enter the length of your array: ");
    scanf("%i", &length);
    
    // The next variable is an array that represents the user's string of numbers.
    int array[length];
    
    // The user is asked to enter their numbers.
    printf("Please enter the numbers in your array: ");
    // This loop allows the user to input a value for each element of the array.
    for (int i = 0; i<length; i++)
    {
        scanf("%i", &array[i]);
    }
    
    // Here the original array is printed so the user can easily see what he inputted. 
    printf("Original Array: ");
    for (int i = 0; i<length; i++)
    {
        printf("%i ", array[i]);
    }
    
    // This integer is a substitute used while switching the values of two elements in the array.
    int sub;
    
    // This loop takes each number in the array and switches it with the number opposite of it. Meaning the first and the last are switched, the second and second-to-last are switched and so on. The variable i is simply a counter. The condition is i<length/2 because the first half of the numbers are switched and if the second half were also switched the result would be the same array that was originally inputted.
    for (int i = 0; i<(length/2); i++)
    {
        sub = array[i];
        array[i] = array[(length-1)-i];
        array[(length-1)-i] = sub;
    }
    
    // Finally the resulting backwards array is printed under the original so the user can clearly see the original and the reversed arrays.
    printf("\nReversed Array: ");
    for (int i = 0; i<length; i++)
    {
        printf("%i ", array[i]);
    }
    
    return 0;
}

