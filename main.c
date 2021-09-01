//SIMPLE BILLING SYSTEM
#include<stdio.h>
void Menu();
int main()
{
	int no=0,price=0,Quantity=0;
	float GST=0.0,Total=0.0;
	printf("\tBilling Software for Cafe Coffee Day\n");
	printf("**************************************************\n");
	Menu();
	printf("Enter Item Number\n");
	scanf("%d",&no);
	if(no < 0)
	{
		printf("Enter valid value\n");
		return 0;
	}
	switch(no)
	{
		case 1:printf("ESPRESSO\n");
		break;
		case 2: printf("CAPPUCHINO\n");
		break;
		case 3: printf("CAFE LATTE\n");
		break;
		case 4: printf("AMERICANOu\n");
		break;
		default:printf("Invalid value\n");
	}
	
	printf("Enter price item \n");
	scanf("%d",&price);
	
	printf("Enter Quantity of item \n");
	scanf("%d",&Quantity);
	price=price*Quantity;
	GST=price*0.05;
	Total=price + GST;
	 
	printf("**********************************************\n\n");

	printf("\tCafe Coffee Day\n");
	printf("*********************************************\n\n");
	
	printf(" Item_Number\t Price\t Quantity\t GST \t\tTotal\t\n");
	printf(" %d\t\t%d\t%d \t\t%f \t\t %f\t\t\n",no,price,Quantity,GST,Total);
	
	printf("**********************************************\n\n");
	printf("\tThank you!! Do Visit Again\n"); 
	return 0;
}
void Menu()
{
	printf("\tMENU\t\t\n\n");
	printf("***Item***********Price**************************\n");
	printf("1.ESPRESSO        110\n");
	printf("2.CAPPUCHINO      145\n");
	printf("3.CAFE LATTE      155\n");
	printf("4.AMERICANO       160\n");
	printf("**************************************************\n");
	
}
