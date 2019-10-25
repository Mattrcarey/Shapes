/// 
/// File: triangle.c 
/// 
/// A program to print out multiple "pyramid" triangles of the form:
/// <pre>
///   *
///  ***
/// *****
/// </pre>
/// 
/// @author TODO_AUTHOR_ID_ : TODO_AUTHOR_FULL_NAME_
/// 
// // // // // // // // // // // // // // // // // // // // // // // // 

// TODO_ADD_#INCLUDES_ HERE
#include<stdio.h>
#include<stdlib.h>
/**
 *  Function: drawTriangle
 *
 *  Description: Draw a 'pyramid' triangle whose base width is 'size'.
 *  Note: If size is even, the function makes a 'size + 1' pyramid triangle. 
 * 
 *  @param size  the width of the base of the triangle to draw
 */
// TODO_WRITE_DRAWTRIANGLE_FUNCTION HERE
//
//
//@author Matt Carey
void drawTriangle(int size){
    int i = 1; //counter for *
    int spaces; // counter for spaces before first *
    if (size%2==0){ //adds 1 to size if its even
	    size++;
    }
    while(i<=size){
	spaces=(size-i)/2;
	for(int x=0; x<spaces;x++){//prints spaces
	    printf(" ");
	}
	for(int x=0;x<i;x++){//prints *'s
	    printf("*");
	}
	printf("\n");
	i=i+2;
    }
    printf("\n");
}
/**
 *  Function: main 
 *
 *  Description: draws pyramid triangles of size 1, 5, and '6'.
 *
 *  @returns errorCode  error Code; EXIT_SUCCESS if no error
 */
// TODO_WRITE_MAIN_FUNCTION HERE
int main(void){
    drawTriangle(1);
    drawTriangle(5);
    drawTriangle(6);
    return(EXIT_SUCCESS);
}
