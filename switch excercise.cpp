#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void){
	
	float x,z;
	char operation;
    
	
	printf("Gimme No1: \n");
	scanf("%f", &x);
	
	printf("Gimme No2: \n");
	scanf("%f", &z);
	
	printf("Gimme opeation Symbol: \n");
	scanf("%s", &operation);
	
	
	float summary = x+z;
	float subtraction = x-z;
	float multiplication = x*z;
	float division = x/z;
	
	
	if(operation == '/' && z == 0){
		printf("Cannot divide by zero \n");
	} else if (operation != '+' && operation != '-' && operation != '*' & operation != '/'){
	    printf("Wrong operation symbol \n");
	}
	
	else {
	    
	switch(operation){
	   case '+':
	       printf("result = %.2f \n", summary);
	       break;
	   case '-':
	       printf("result = %.2f \n", subtraction);
	       break;
	   case '*':
	       printf("result = %.2f \n", multiplication);
	       break;
	   case '/':
	       printf("result = %.2f \n", division);
	       break;
	   default:
	        printf("invalid input \n");
	        break;
	}
	
	system("PAUSE");
	return 0;
}

}

