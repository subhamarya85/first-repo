#include<stdio.h>

void main_menu(void);
void Percentage(float);
void item1(void);
void item2(void);
void item3(void);
void item4(void);
void item5(void);




float total=0;
int quantity;
int main()
{
	main_menu();
}
void main_menu(void)
{
	int item;
	printf("\t\t\t\t\tWELCOME\t\t\t\t\t\n");
	printf("\t\t\txxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\t\t\t\n");
	printf("\t\t\txxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\t\t\t\n");
	printf("\t\t\tItem NO.\t\t\tItem\t\t\tPrice\n");
	printf("\t\t***********************\t*************************\t************************\n");
	printf("\t\t 1.\t\t\tYoghurt\t\t\t50.0\n");
	printf("\t\t 2.\t\t\tCheese\t\t\t100.0\n");
	printf("\t\t 3.\t\t\tMilk\t\t\t40.0\n");
	printf("\t\t 4.\t\t\tFruit\t\t\t200.0\n");
	printf("\t\t 5.\t\t\tOil\t\t\t300.0\n");
	scanf("%d",&item);
	switch(item)
	{
		case 1:
			item1();
			break;
		case 2:
			item2();
			break;
		case 3:
			item3();
			break;
		case 4:
			item4();
			break;
		case 5:
			item5();
			break;
		default:
		printf("\t\tYou have entered invalid key");	
	}
}
void item1(void)
{
	int choice;
	printf("\t\tplease enter your quantity::\n");
	scanf("%d",&quantity);
	total=total+50.0*quantity;
	if(total>1000)
	{
		printf("If you want to shop more then please enter [88] and if won't then press [99]");
		scanf("%d",&choice);
		if(choice==88)
		{
			main_menu();
		}
		else if(choice==99)
		{
			printf("%.2f",total);
			Percentage(total);
		}
		else
		{
			printf("you have entered invalid key");

		}
	}
	else
	{

        	printf("If you want to shop more then please enter [88] and if won't then press [99]");
		scanf("%d",&choice);
		if(choice==88)
		{
			main_menu();
		}
		else if(choice==99)
		{
			printf("%.2f",total);
		}
		else
		{
			printf("you have entered invalid key");

		}

	}
}
void Percentage(float x)
{
	float percentage;
	total=total*(1-(0.1));
	printf("\ntotal=%.2f",total);

}
void item2(void)
{

	int choice;
	printf("\t\tplease enter your quantity::\n");
	scanf("%d",&quantity);
	total=total+100.0*quantity;
	if(total>1000)
	{
		printf("If you want to shop more then please enter [88] and if won't then press [99]");
		scanf("%d",&choice);
		if(choice==88)
		{
			main_menu();
		}
		else if(choice==99)
		{
			printf("%.2f",total);
			Percentage(total);
		}
		else
		{
			printf("you have entered invalid key");

		}
	}
	else
	{

        	printf("If you want to shop more then please enter [88] and if won't then press [99]");
		scanf("%d",&choice);
		if(choice==88)
		{
			main_menu();
		}
		else if(choice==99)
		{
			printf("%.2f",total);
		}
		else
		{
			printf("you have entered invalid key");
              
		}
        }

}

void item3(void)
{


	int choice;
	printf("\t\tplease enter your quantity::\n");
	scanf("%d",&quantity);
	total=total+40.0*quantity;
	if(total>1000)
	{
		printf("If you want to shop more then please enter [88] and if won't then press [99]");
		scanf("%d",&choice);
		if(choice==88)
		{
			main_menu();
		}
		else if(choice==99)
		{
			printf("%.2f",total);
			Percentage(total);
		}
		else
		{
			printf("you have entered invalid key");

		}
	}
	else
	{

        	printf("If you want to shop more then please enter [88] and if won't then press [99]");
		scanf("%d",&choice);
		if(choice==88)
		{
			main_menu();
		}
		else if(choice==99)
		{
			printf("%.2f",total);
		}
		else
		{
			printf("you have entered invalid key");

		}

	}

}
void item4(void)
{


	int choice;
	printf("\t\tplease enter your quantity::\n");
	scanf("%d",&quantity);
	total=total+200.0*quantity;
	if(total>1000)
	{
		printf("If you want to shop more then please enter [88] and if won't then press [99]");
		scanf("%d",&choice);
		if(choice==88)
		{
			main_menu();
		}
		else if(choice==99)
		{
			printf("%.2f",total);
			Percentage(total);
		}
		else
		{
			printf("you have entered invalid key");

		}
	}
	else
	{

        	printf("If you want to shop more then please enter [88] and if won't then press [99]");
		scanf("%d",&choice);
		if(choice==88)
		{
			main_menu();
		}
		else if(choice==99)
		{
			printf("%.2f",total);
		}
		else
		{
			printf("you have entered invalid key");

		}

	}
}
void item5(void)
{


	int choice;
	printf("\t\tplease enter your quantity::\n");
	scanf("%d",&quantity);
	total=total+300.0*quantity;
	if(total>1000)
	{
		printf("If you want to shop more then please enter [88] and if won't then press [99]");
		scanf("%d",&choice);
		if(choice==88)
		{
			main_menu();
		}
		else if(choice==99)
		{
			printf("%.2f",total);
			Percentage(total);
		}
		else
		{
			printf("you have entered invalid key");

		}
	}
	else
	{

        	printf("If you want to shop more then please enter [88] and if won't then press [99]");
		scanf("%d",&choice);
		if(choice==88)
		{
			main_menu();
		}
		else if(choice==99)
		{
			printf("%.2f",total);
		}
		else
		{
			printf("you have entered invalid key");

		}

	}
}
