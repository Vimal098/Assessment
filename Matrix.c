#include<stdio.h>
#include<conio.h>
int main(){
	int a[2][2],b[2][2],c[2][2],i,j;
	printf("\t\t\t\tMatrix Multiplication:-\n");
	printf("\n--------------Matrix: 1---------------\n\n\n");
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
		 printf("Enter the Elements:");
		 scanf("%d" ,&a[i][j]);
	}	 	
	}
	printf("\n");
		for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			printf("%d\t" ,a[i][j]);
		}
		printf("\n\n");
	}
	
		printf("\n\n--------------Matrix: 2---------------\n\n\n");
		for(i=0; i<2; i++){
		for(j=0; j<2; j++){                              
			printf("Enter the Elements:");
			scanf("%d" ,&b[i][j]);
		}
			
}
	printf("\n");
		for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			printf("%d\t" ,b[i][j]);
		}
			printf("\n\n");
	}
	printf("\n\n---------Result : Multiplication Matrix-----------\n\n");

	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			c[i][j]=a[i][j]*b[i][j];                                 
		printf("%d\t" ,c[i][j]);	
		}
		printf("\n\n");
	}
	getch();
	return 0;
	}