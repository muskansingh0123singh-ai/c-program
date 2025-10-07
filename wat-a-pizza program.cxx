#include<stdio.h>
int main(){
	char customername[5];
	char customeremail[10];
	int phoneno;
	int noofpizzaordered;
	char pizzasize[5];
	float pizzaprice=12.5;
	int noofgarlicbreadordered;
	float garlicbreadprice=5.99;
	int noofbeverageordered;
	float beverageprice=1.99;
	printf("enter your name\n");
	scanf("%s",&customername);
	printf("enter your email\n");
	scanf("%s",&customeremail);
	printf("enter your no\n");
	scanf("%d",&phoneno);
	printf("enter pizza size\n");
	scanf("%s",&pizzasize);
	printf("enter no. of garlic bread\n");
	scanf("%d",&noofgarlicbreadordered);
	printf("enter no. of beverages\n");
	scanf("%d",&noofbeverageordered);
	float totalprizeofpizza=noofpizzaordered*pizzaprice;
	printf("total pizza price is %f\n",totalprizeofpizza);
	float garlicbread=noofgarlicbreadordered*garlicbreadprice;
	printf("total garlic bread price is %f\n",garlicbread);
	float beverage=noofbeverageordered*beverageprice;
	printf("total beverage price is %f\n",beverage);
	float totalbill=totalprizeofpizza+garlicbread+beverage;
	printf("total bill is %f\n",totalbill);
	if (totalbill>=100) 
	printf("true");
	else
	printf("false\n");
	
	
	
	
	
	return 0;
	
	
}
