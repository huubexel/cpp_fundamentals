#include "../main.ih"

void rawMemory()
{

}


//Although raw memory may consist of multiple characters it should not be interpreted as an array of characters. 
//Since raw memory returned by new is returned as a void * its return value can be assigned to a void * variable. 
//More often it is assigned to a char * variable, using a cast. Here is an example: