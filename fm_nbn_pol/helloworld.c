#include "stdio.h"

void
helloWorldFunction(
	char *input);

/*! \brief This the main function in this file.
*
* The main function will just call another  function called helloWorldFunction
*******************************************************************************/
int main()
{
 helloWorldFunction("Hello World 3");
 return 0;
}


/*! @Brief This function will print Hello World to the screen
*
* The function will take a charcter as an input and will print the character
* followed by a new line to the terminal
*******************************************************************************/
void
helloWorldFunction(char *input /*!< [in] */)
{
 printf("%s\n",input);
}
