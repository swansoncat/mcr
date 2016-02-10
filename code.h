/********************************************************************
*
* This class is just a header file to be used with the other program
* files to manipulate and search through my coke rewards codes.
*
* @type is a char array with a max size of 20 that tells the origin of
*       the code, like sprite bottle, diet coke bottle, coke 24 pack,
*       Dasani water bottle case, etc.
*
* @fullcode is a char array with max size of 15 that holds the actual
            14 character codes found on the bottle caps and boxes.
*
*********************************************************************/

#include<stdio.h>

struct code
{
    char[20] type;
    char[15] fullcode;
};
