#include "stdio.h"

/*****************************************************
* This the main function in this file
* The main function will just call another  function called helloWorldFunction
****************************************************//**
void
helloWorldFunction(char *input);
int
main()
{
 helloWorldFunction("Hello World");
 return 0;
}


void
helloWorldFunction(char *input)
{
 printf("%s\n",input);
}
