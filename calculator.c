#include<stdio.h>
#include<conio.h>
void addition();
void subtraction();
void multiplication();
void division();

int main(){
	int ch;
	printf("--------------------------------MENU-----------------------------\n\n\n");
	printf("1. Addition\n");
	printf("2. Substraction\n");
	printf("3. Multiplication\n");
	printf("4. Division\n\n\n");
	printf("Enter Your Choice5 : ");
	scanf("%d" ,&ch);
	switch(ch){
	case 1:
	addition();
	break;
	case 2:
		subtraction();
		break;
		case 3:
			multiplication();
			break;
			case 4:
				division();
				break;
	default :
	printf("Invalid Choice !!!!!!");		
}
	return 0;
}
void addition(){
	int a,b,c;
	printf("\n\nEnter first number : ");
	scanf("%d" ,&a);
		printf("Enter second number : ");
	scanf("%d" ,&b);
	c=a+b;
	printf("\n\nAddition = %d" ,c);

	}
	void subtraction(){
	int a,b,c;
	printf("\n\nEnter first number : ");
	scanf("%d" ,&a);
		printf("Enter second number : ");
	scanf("%d" ,&b);
	c=a-b;
	printf("\n\nSubtraction = %d" ,c);

	}
	void multiplication(){
	int a,b,c;
	printf("\n\nEnter first number : ");
	scanf("%d" ,&a);
		printf("Enter second number : ");
	scanf("%d" ,&b);
	c=a*b;
	printf("\n\nMultiplication = %d" ,c);

	}
	void division(){
	int a,b,c;
	printf("\n\nEnter first number : ");
	scanf("%d" ,&a);
		printf("Enter second number : ");
	scanf("%d" ,&b);
	c=a/b;
	printf("\n\nDivision = %d" ,c);

	}