#include<stdio.h>
#include<string.h>
#include<conio.h>
int main(){
		int ch,qty,total,discount;
	int i,y=1,n=0;
	char name,gender;
	int age;
	double mob;
	printf("\n\n\t\t-------******** Saif Jwellers ********--------\n\n");
	printf("\n\t\t-------------Item Name:--------------\n\n\n");
	printf("\t1.Chain        price=12000rs\n");
	printf("\t2.Ring         price=5000rs\n");
	printf("\t3.Payal        price=1000rs\n");
	printf("\t4.Earring      price=8000rs\n");
	printf("\t5.Nosepin      price=6000rs\n\n");
		printf("For More Order's to press Yes=1 or No=0\n..");
	printf("=========================\n");
	printf("\tEnter your choice:\n\t");
	scanf("%d" ,&ch);
	switch(ch){
	case 1:
		printf("You have Selected chain.\n");
		printf("Enter the quantity:-\n");
		scanf("%d" ,&qty);
		for(i=1; i<=qty; i++){
			total=12000*qty;
		}
			printf("Amount is:-%d\n",total);
	printf("========================\n");
		printf("Enter Your Name:\n");
	scanf("%s" ,&name);
	printf("Enter your Age:\n");
	scanf("%d" ,&age);
	printf("Enter you mobile number:\n");
	scanf("%d" ,&mob);
	printf("Enter your Gender:\n");
	scanf("%s" ,&gender);
	if(gender='male',age=55){
	
			discount=total*0.05;
			total=total-discount;
			printf("Amount is:-%d\n",total);
	}
	else if(gender=='female',age==25){
			discount=total*0.10;
			total=total-discount;
			printf("Amount is:-%d\n",total);
	}
	else{
		printf("Amount is:-%d\n",total);
	}
	break;
		case 2:
		printf("You have Selected Ring.\n");
		printf("Enter the quantity:-\n");
		scanf("%d" ,&qty);
		for(i=1; i<=qty; i++){
			total=5000*qty;
		}
			printf("Amount is:-%d\n",total);
	printf("========================\n");
		printf("Enter Your Name:\n");
	scanf("%s" ,&name);
	printf("Enter your Age:\n");
	scanf("%d" ,&age);
	printf("Enter you mobile number:\n");
	scanf("%d" ,&mob);
	printf("Enter your Gender:\n");
	scanf("%s" ,&gender);
	if(gender=='male',age==55){
	 
			discount=total*0.05;
			total=total-discount;
					printf("Amount is:-%d\n",total);
		}
			else if(gender=='female',age==25){
			discount=total*0.10;
			total=total-discount;
			printf("Amount is:-%d\n",total);
	}
	
else {
		printf("Amount is:-%d\n",total);
}
	
	break;
		case 3:
		printf("You have Selected Payal.\n");
		printf("Enter the quantity:-\n");
		scanf("%d" ,&qty);
		for(i=1; i<=qty; i++){
			total=1000*qty;
		}
			printf("Amount is:-%d\n",total);
	printf("========================\n");
		printf("Enter Your Name:\n");
	scanf("%s" ,&name);
	printf("Enter your Age:\n");
	scanf("%d" ,&age);
	printf("Enter you mobile number:\n");
	scanf("%d" ,&mob);
	printf("Enter your Gender:\n");
	scanf("%s" ,&gender);
	if(gender=='male',age==55){
	 
			discount=total*0.05;
			total=total-discount;
					printf("Amount is:-%d\n",total);
		}
		else if(gender=='female',age==25){
			discount=total*0.10;
			total=total-discount;
			printf("Amount is:-%d\n",total);
	}
else {
		printf("Amount is:-%d\n",total);
}
break;
		case 4:
		printf("You have Selected Earring.\n");
		printf("Enter the quantity:-\n");
		scanf("%d" ,&qty);
		for(i=1; i<=qty; i++){
			total=8000*qty;
		}
			printf("Amount is:-%d\n",total);
	printf("========================\n");
		printf("Enter Your Name:\n");
	scanf("%s" ,&name);
	printf("Enter your Age:\n");
	scanf("%d" ,&age);
	printf("Enter you mobile number:\n");
	scanf("%d" ,&mob);
	printf("Enter your Gender:\n");
	scanf("%s" ,&gender);
	if(gender=='male',age==55){
	 
			discount=total*0.05;
			total=total-discount;
					printf("Amount is:-%d\n",total);
		}
		else if(gender=='female',age==25){
			discount=total*0.10;
			total=total-discount;
			printf("Amount is:-%d\n",total);
	}
else {
		printf("Amount is:-%d\n",total);
}	
	break;
   	case 5:
		printf("You have Selected Nosepin.\n");
		printf("Enter the quantity:-\n");
		scanf("%d" ,&qty);
		for(i=1; i<=qty; i++){
			total=6000*qty;
		}
			printf("Amount is:-%d\n",total);
	printf("========================\n");
		printf("Enter Your Name:\n");
	scanf("%s" ,&name);
	printf("Enter your Age:\n");
	scanf("%d" ,&age);
	printf("Enter you mobile number:\n");
	scanf("%d" ,&mob);
	printf("Enter your Gender:\n");
	scanf("%s" ,&gender);
	if(gender=='male',age==55){
	 
			discount=total*0.05;
			total=total-discount;
					printf("Amount is:-%d\n",total);
		}
		else if(gender=='female',age==25){
			discount=total*0.10;
			total=total-discount;
			printf("Amount is:-%d\n",total);
	}
else {
		printf("Amount is:-%d\n",total);
}
	
	break;
	default:
		printf("Item is not Available");
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
		printf("You have Selected chain.\n");
		printf("Enter the quantity:-\n");
		scanf("%d" ,&qty);
		for(i=1; i<=qty; i++){
			total=12000*qty;
		}
			printf("Amount is:-%d\n",total);
	printf("========================\n");
		printf("Enter Your Name:\n");
	scanf("%s" ,&name);
	printf("Enter your Age:\n");
	scanf("%d" ,&age);
	printf("Enter you mobile number:\n");
	scanf("%d" ,&mob);
	printf("Enter your Gender:\n");
	scanf("%s" ,&gender);
	if(gender='male',age=55){
	
			discount=total*0.05;
			total=total-discount;
			printf("Amount is:-%d\n",total);
	}
	else if(gender=='female',age==25){
			discount=total*0.10;
			total=total-discount;
			printf("Amount is:-%d\n",total);
	}
	else{
		printf("Amount is:-%d\n",total);
	}
	break;
		case 2:
		printf("You have Selected Ring.\n");
		printf("Enter the quantity:-\n");
		scanf("%d" ,&qty);
		for(i=1; i<=qty; i++){
			total=5000*qty;
		}
			printf("Amount is:-%d\n",total);
	printf("========================\n");
		printf("Enter Your Name:\n");
	scanf("%s" ,&name);
	printf("Enter your Age:\n");
	scanf("%d" ,&age);
	printf("Enter you mobile number:\n");
	scanf("%d" ,&mob);
	printf("Enter your Gender:\n");
	scanf("%s" ,&gender);
	if(gender=='male',age==55){
	 
			discount=total*0.05;
			total=total-discount;
					printf("Amount is:-%d\n",total);
		}
			else if(gender=='female',age==25){
			discount=total*0.10;
			total=total-discount;
			printf("Amount is:-%d\n",total);
	}
	
else {
		printf("Amount is:-%d\n",total);
}
	
	break;
		case 3:
		printf("You have Selected Payal.\n");
		printf("Enter the quantity:-\n");
		scanf("%d" ,&qty);
		for(i=1; i<=qty; i++){
			total=1000*qty;
		}
			printf("Amount is:-%d\n",total);
	printf("========================\n");
		printf("Enter Your Name:\n");
	scanf("%s" ,&name);
	printf("Enter your Age:\n");
	scanf("%d" ,&age);
	printf("Enter you mobile number:\n");
	scanf("%d" ,&mob);
	printf("Enter your Gender:\n");
	scanf("%s" ,&gender);
	if(gender=='male',age==55){
	 
			discount=total*0.05;
			total=total-discount;
					printf("Amount is:-%d\n",total);
		}
		else if(gender=='female',age==25){
			discount=total*0.10;
			total=total-discount;
			printf("Amount is:-%d\n",total);
	}
else {
		printf("Amount is:-%d\n",total);
}
break;
		case 4:
		printf("You have Selected Earring.\n");
		printf("Enter the quantity:-\n");
		scanf("%d" ,&qty);
		for(i=1; i<=qty; i++){
			total=8000*qty;
		}
			printf("Amount is:-%d\n",total);
	printf("========================\n");
		printf("Enter Your Name:\n");
	scanf("%s" ,&name);
	printf("Enter your Age:\n");
	scanf("%d" ,&age);
	printf("Enter you mobile number:\n");
	scanf("%d" ,&mob);
	printf("Enter your Gender:\n");
	scanf("%s" ,&gender);
	if(gender=='male',age==55){
	 
			discount=total*0.05;
			total=total-discount;
					printf("Amount is:-%d\n",total);
		}
		else if(gender=='female',age==25){
			discount=total*0.10;
			total=total-discount;
			printf("Amount is:-%d\n",total);
	}
else {
		printf("Amount is:-%d\n",total);
}	
	break;
   	case 5:
		printf("You have Selected Nosepin.\n");
		printf("Enter the quantity:-\n");
		scanf("%d" ,&qty);
		for(i=1; i<=qty; i++){
			total=6000*qty;
		}
			printf("Amount is:-%d\n",total);
	printf("========================\n");
		printf("Enter Your Name:\n");
	scanf("%s" ,&name);
	printf("Enter your Age:\n");
	scanf("%d" ,&age);
	printf("Enter you mobile number:\n");
	scanf("%d" ,&mob);
	printf("Enter your Gender:\n");
	scanf("%s" ,&gender);
	if(gender=='male',age==55){
	 
			discount=total*0.05;
			total=total-discount;
					printf("Amount is:-%d\n",total);
		}
	
		else if(gender=='female',age==25){
			discount=total*0.10;
			total=total-discount;
			printf("Amount is:-%d\n",total);
	}
else {
		printf("Amount is:-%d\n",total);
}
	
	break;
	default:
		printf("Item is not Available");
		break;
	}
}
	getch();
return 0;
}