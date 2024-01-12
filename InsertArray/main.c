// This 'C' program inserts an element in array at a specified position. The program also print an error message if the insert position is invalid.
/*
 Example output:
        Enter your array size : 5
        Enter array elements : 11 12 14 15 16
        Your current array : 11 12 14 15 16
        Enter element to insert : 13
        Enter position where to insert: 3
        ----------------------------------
        Now, elements of array are : 11 12 13 14 15 16.
 */
//  Created by Mehmet Akif Duran, 12 January,2024

#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 1000

int main(){
    
    // Variable decleration(s).
    
    int userArray[MAX_SIZE], userSize;
    int count, position, insertedNumber;
    
    //Executable Statement(s).
    
    
    printf("Enter your array size : "); //getting users array size
    scanf("%d", &userSize);
    
    printf("Enter your array elements : "); //putting users elements in to an array.
    for(count=0; count<userSize; count++){
        scanf("%d",&userArray[count]);
    }
      
    
    printf("Your current array looks like this : \n"); //printing users current array so user can see the insertation operation after.
    for(count=0; count<userSize; count++){
        printf("%d ", userArray[count]);
    }
    printf("\n");
    
    
    printf("Enter the element you want to insert : \n"); //getting the element we will insert in to the array.
    scanf("%d", &insertedNumber);
    
    printf("Enter the position where you want to insert the element : \n"); //getting the position where to insert our element.
    scanf("%d", &position);
    
    if(position>userSize+1 || position <= 0){
        printf("You have entered an invalid position, start the program again! \n"); //Error message
    }
    else
    {
        for(count=userSize; count>=position; count--)
        {
            userArray[count] = userArray[count-1]; //shifting array
        }
        
        userArray[position-1] = insertedNumber; //inserting the element
        userSize++;
    }
    
    printf("-------------------------------------\n");
    
    
    printf("Now, elements of the array are : \n"); //printing the new array.
    for(count=0; count<userSize; count++)
        printf("%d ", userArray[count]);
    
    printf("\n\n");
    printf("! ! ! THE PROGRAM ENDS ! ! !\n");
    return 0;
}
