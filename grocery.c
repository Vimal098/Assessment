#include<stdio.h>
#include<conio.h>
	int ch,qty,total;
	int i,y=1,n=0;
int main(){
	printf("\t\t\t.....Grocery Store.....\n\n");
	printf(".......Goods List........\n\n");
	printf("=========================\n\n");
	printf("[1].1Kg Sugar        price=45.00rs\n");
		printf("[2].1 Liter Oil      price=180.00rs\n");
			printf("[3].1Kg Rice         price=50.00rs\n");
				printf("[4].1Kg pulse        price=130.00rs\n");
		printf("[5].1Kg wheat Flour  price=42.00rs\n");
						printf("[6].1 Liter Milk     price=60.00rs\n");
							printf("[7].1Kg coconut      price=180.00rs\n");
								printf("[8].1Kg Jwaar        price=35.00rs\n\n");

	
	printf("For More Order's to press Yes=1 or No=0\n..");
	printf("=========================\n");
	printf("Enter your choice..:-");
	scanf("%d" ,&ch);
	switch(ch){
	case 1:
		printf("You have Selected Sugar.\n");
		printf("Enter the quantity:-\n");
		scanf("%d" ,&qty);
		for(i=1; i<=qty; i++){
			total=45*qty;
		}
	printf("Amount is:-%d\n",total);
	printf("========================\n");
	break;
	case 2:
			printf("You have Selected Oil.\n");
		printf("Enter the quantity:-\n");
		scanf("%d" ,&qty);
		for(i=1; i<=qty; i++){
			total=180*qty;
		}
	printf("Amount is:-%d\n",total);
	printf("========================\n");
	break ;
	case 3:
			printf("You have Selected Rice.\n");
		printf("Enter the quantity:-\n");
		scanf("%d" ,&qty);
		for(i=1; i<=qty; i++){
			total=50*qty;
		}
	printf("Amount is:-%d\n",total);
	printf("========================\n");
	break ;
	case 4:
			printf("You have Selected Pulse.\n");
		printf("Enter the quantity:-\n");
		scanf("%d" ,&qty);
		for(i=1; i<=qty; i++){
			total=130*qty;
		}
	printf("Amount is:-%d\n",total);
	printf("========================\n");
	break ;
		case 5:
			printf("You have Selected Wheat Flour.\n");
		printf("Enter the quantity:-\n");
		scanf("%d" ,&qty);
		for(i=1; i<=qty; i++){
			total=130*qty;
		}
	printf("Amount is:-%d\n",total);
	printf("========================\n");
	break ;
		case 6:
			printf("You have Selected Milk.\n");
		printf("Enter the quantity:-\n");
		scanf("%d" ,&qty);
		for(i=1; i<=qty; i++){
			total=60*qty;
		}
	printf("Amount is:-%d\n",total);
	printf("========================\n");
	break ;
		case 7:
			printf("You have Selected Coconut.\n");
		printf("Enter the quantity:-\n");
		scanf("%d" ,&qty);
		for(i=1; i<=qty; i++){
			total=180*qty;
		}
	printf("Amount is:-%d\n",total);
	printf("========================\n");
	break ;
		case 8:
			printf("You have Selected Jwaar.\n");
		printf("Enter the quantity:-\n");
		scanf("%d" ,&qty);
		for(i=1; i<=qty; i++){
			total=35*qty;
		}
	printf("Amount is:-%d\n",total);
	printf("========================\n");
	break ;
	default:
		printf("Item is not available");
		break;  
	}
	while(y>0||y<0){
		
		printf("Do You want to buy one more items?(y/n):-");
		scanf("%d",&y);
		if(y==0){
			printf("Thank You For Shopping");
			break;
		}
		printf("=========================\n");
	printf("Enter your choice..:-");
	scanf("%d" ,&ch);
	switch(ch){
	case 1:
		printf("You have Selected Sugar.\n");
		printf("Enter the quantity:-\n");
		scanf("%d" ,&qty);
		for(i=1; i<=qty; i++){
			total=45*qty;
		}
	printf("Amount is:-%d\n",total);
	printf("========================\n");
	break;
	case 2:
			printf("You have Selected Oil.\n");
		printf("Enter the quantity:-\n");
		scanf("%d" ,&qty);
		for(i=1; i<=qty; i++){
			total=180*qty;
		}
	printf("Amount is:-%d\n",total);
	printf("========================\n");
	break ;
	case 3:
			printf("You have Selected Rice.\n");
		printf("Enter the quantity:-\n");
		scanf("%d" ,&qty);
		for(i=1; i<=qty; i++){
			total=50*qty;
		}
	printf("Amount is:-%d\n",total);
	printf("========================\n");
	break ;
	case 4:
			printf("You have Selected Pulse.\n");
		printf("Enter the quantity:-\n");
		scanf("%d" ,&qty);
		for(i=1; i<=qty; i++){
			total=130*qty;
		}
	printf("Amount is:-%d\n",total);
	printf("========================\n");
	break ;
		case 5:
			printf("You have Selected Wheat Flour.\n");
		printf("Enter the quantity:-\n");
		scanf("%d" ,&qty);
		for(i=1; i<=qty; i++){
			total=130*qty;
		}
	printf("Amount is:-%d\n",total);
	printf("========================\n");
	break ;
		case 6:
			printf("You have Selected Milk.\n");
		printf("Enter the quantity:-\n");
		scanf("%d" ,&qty);
		for(i=1; i<=qty; i++){
			total=60*qty;
		}
	printf("Amount is:-%d\n",total);
	printf("========================\n");
	break ;
		case 7:
			printf("You have Selected Coconut.\n");
		printf("Enter the quantity:-\n");
		scanf("%d" ,&qty);
		for(i=1; i<=qty; i++){
			total=180*qty;
		}
	printf("Amount is:-%d\n",total);
	printf("========================\n");
	break ;
		case 8:
			printf("You have Selected Jwaar.\n");
		printf("Enter the quantity:-\n");
		scanf("%d" ,&qty);
		for(i=1; i<=qty; i++){
			total=35*qty;
		}
	printf("Amount is:-%d\n",total);
	printf("========================\n");
	break ;
	default:
		printf("Item is not available");
		break;  
	}	
			
		}
		getch();
		return 0;		
			}
	
