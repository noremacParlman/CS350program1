#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "virtualMemory.h"

int main(int argc, char**argv){
	/*must recieve two parameters.
  		1 frames of memory 
  		2 input file name		
  	*/
	int size = 0;
	std::string input ="";

	/* input validation */
	if(argc > 1){
		size = atoi(argv[1]);	
		input = argv[2];
		printf("size = %d\ninput file = \"%s\"\n",size, input.c_str());
	}	
	
	virtualMemory memory(size);
		
	/* open file */

	/*
		while reading input 
			if(START)
			if(TERMINATE)
			if(REFERENCE)
   	*/

	


}
