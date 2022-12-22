#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	
	int num1;
	int num2;
	char num3;
	printf("enter any operator ");
	scanf("%c",&num3);
	printf("enter first operand ");
	scanf("%d",&num1);
	printf("eneter second operand ");
	scanf("%d",&num2);
	
	switch (num3){
		case '+':
			num3=num1+num2;
			printf("answer is %d",num3);
			break;
			
			
			case '-':
				num3=num1-num2;
				printf("answer is %d",num3);
				break;
				
				
				case '*':
					num3=num1*num2;
					printf("answer is %d",num3);
					break;
					
					default:
					printf("better luck next time");
					
	}
	
	
	
	
	
	
	
	
	return 0;
}
