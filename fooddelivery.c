#include<stdio.h>
#include<conio.h>
void pizza(){
	int add,total=0,a;
	printf("\nYou have Selected Pizza.");
	printf("\n\nEnter the Quantity :");
	scanf("%d" ,&a);
add=180*a;
total=add+total;
printf("Amount : %d",add);
printf("\n\n Total Amount is: %d" ,total);	
}
void dosa(){
	int add,total=0,b;
	printf("\nYou have Selected dosa.");
	printf("\n\nEnter the Quantity :");
	scanf("%d" ,&b);
add=120*b;
total=add+total;
printf("Amount : %d",add);
printf("\n\n Total Amount is: %d" ,total);
	}
	void burger(){
		int add,total=0,c;
	printf("\nYou have Selected burger.");
	printf("\n\nEnter the Quantity :");
	scanf("%d" ,&c);
add=100*c;
total=add+total;
printf("Amount : %d",add);
printf("\n\n Total Amount is: %d" ,total);
	}	
void idli(){
		int add,total=0,d;
	printf("\nYou have Selected idli.");
	printf("\n\nEnter the Quantity :");
	scanf("%d" ,&d);
add=50*d;
total=add+total;
printf("Amount : %d",add);
printf("\n\n Total Amount is: %d" ,total);
	}

int y=1, n=0;
int main(){
	int in;
	char ch1;
printf("\t\t===========Welcome To Raj Restaurant===========\n\n\n");
printf("\t\t*******Choose Your Meal.********\n\n");

printf("\n\t\t1.Pizza      price = 180rs/pcs");
printf("\n\t\t2.Dosa       price = 120rs/pcs");
printf("\n\t\t3.Burger     price = 100rs/pcs");
printf("\n\t\t4.Idli       price = 50rs/pcs");

printf("\n\n===============================================================================\n\n");
printf("please Enter Your Choice:");
scanf("%d" ,&in);
switch(in){
case 1:
	 pizza();
  break;
case 2:
	 dosa();	
break;

case 3:
	 burger();
break;
case 4:
	 idli();
	break;
default :
	printf("Dish Not available");
break;
}	
	while(y>0||y<0){
		
		printf("\n\nDo You want to buy one more items?(y/n):-");
		scanf("%d",&y);
		if(y==0){
			printf("Thank You For Shopping");
			break;
      }
		printf("=========================\n");
	printf("Enter your choice..:-");
	scanf("%d" ,&in);
	switch(in){
case 1:
	 pizza();
  break;
case 2:
	 dosa();	
break;

case 3:
	 burger();
break;
case 4:
	 idli();
	break;
default :
	printf("Dish Not available");
break;
}	
}
getch();	
return 0;
}

