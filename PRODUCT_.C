///////////////////////////PRODUCT ITEMS FILTER PROJECT////////////////////
#include<stdio.h>
#include<conio.h>
			//    0		1	 2	  3	    4		5
char mobile_brand[6][10]={{"realme"},{"oppo"},{"vivo"},{"poco"},{"samsung"},{"nokia"}};

int realme_ram[]={2,3,4,6,8,12,16};//7
int realme_price[]={8000,10000,12000,15000,17000,20000,25000};

int oppo_ram[]={3,4,6,8,12,16};//6
int oppo_price[]={9500,11999,14999,20000,24500,27000};

int vivo_ram[]={2,3,4,6,8,12,16};//7
int vivo_price[]={8500,9500,11999,14999,20000,24500,27000};

int poco_ram[]={3,4,6,8,12,16}; //6
int poco_price[]={9000,11500,13999,17500,20500,23000};

int samsung_ram[]={3,4,6,8,12,16};///6
int samsung_price[]={11999,14999,18999,25500,29530,31999};

int nokia_ram[]={3,4,6,8,12,16}; ///6
int nokia_price[]={8000,10000,12999,15000,18500,20000};


void all_product();
void filter_product();
void filter_brand_name();
void filter_price();
void filter_ram();


void main()
{
	int choice;
	repeat:

	clrscr();

	printf("\n\n\t   _______________________________________________________\n");
	printf("\n\t\t\t    SS MOBILE SHOPPY");
	printf("\n\t   _______________________________________________________\n");

	printf("\n\n\t\tPRESS 1 For Checking All Products");
	printf("\n\n\t\tPRESS 2 For Mobile Filteration According to you");
	printf("\n\n\t\tPRESS 3 for Exit");


	printf("\n\n\n\t\tEnter Your Choice : ");
	scanf("%d",&choice);

	if(choice==1)
	{
		all_product();
		goto repeat;
	}
	else if(choice==2)
	{
		filter_product();
		goto repeat;
	}
	else if(choice==3)
	{
		printf("\n\n\t\tPlease Wait Exiting.....");
		delay(1000);
		goto exit;
	}
	else
	{
		printf("\n\n\t\tInvalid Choice ....!");
	}

getch();
exit:
}

void all_product()
{
	int i;
	int x,y;
	clrscr();

	printf("___________________________________________________________________________");
	printf("\n|  BRAND NAME   RAM         PRICE     | BRAND NAME    RAM     PRICE    	  |");
	printf("\n|_____________________________________|___________________________________|");

	for(i=0;i<6;i++)
	{
	    printf("\n|   %s       %d        %d Rs         %s        %d      %d Rs",mobile_brand[0],realme_ram[i],realme_price[i],mobile_brand[2],vivo_ram[i],vivo_price[i]);
	    printf("\n|    %s        %d         %d Rs        %s        %d      %d Rs",mobile_brand[1],oppo_ram[i],oppo_price[i],mobile_brand[3],poco_ram[i],poco_price[i]);
	    printf("\n|   %s      %d         %d Rs        %s       %d     %d Rs",mobile_brand[4],samsung_ram[i],samsung_price[i],mobile_brand[5],nokia_ram[i],nokia_price[i]);
	}
	     printf("\n|   %s       %d        %d Rs         %s        %d      %d Rs",mobile_brand[0],realme_ram[6],realme_price[6],mobile_brand[2],vivo_ram[6],vivo_price[i]);
	     printf("\n|_____________________________________|___________________________________|");

	 x=39,y=4;

	for(i=1;i<=19;i++)
	{
		gotoxy(x,y);
		printf("|");
		y++;
	}

	x=75,y=4;

	for(i=1;i<=19;i++)
	{
		gotoxy(x,y);
		printf("|");
		y++;
	}

	printf("\n");
	getch();
}

void filter_product()
{
	int choice;

	repeat:
	printf("\n\n\t\tWhat Do you Want to Filter...?");
	printf("\n\n\t\tPRESS 1 For Brand Name");
	printf("\n\t\tPRESS 2 For RAM");
	printf("\n\t\tPRESS 3 For Price");
	printf("\n\n\t\tChoose an Option : ");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1:
			filter_brand_name();
			break;

		case 2 :
			filter_ram();
			break;

		case 3 :
			filter_price();
			break;

		default :
			printf("\n\t\tInvalid Option....!\n\tTry again");
			delay(1000);
			goto repeat;

	}
}

void filter_brand_name()
{
	char brand[10];
	int i,j,size=0;
	int choice,check;

	again:

	check=1;

	clrscr();

	printf("\n\n\t___________MOBILE FILTERING ON THE BASIS OF BRAND___________");


	printf("\n\n\n\tEnter Mobile Brand Name : ");
	fflush(stdin);
	gets(brand);


	for(i=0;i<6;i++)
	{
	     if(strcmp(brand,mobile_brand[i])==0)
	     {

		printf("\n\n\t\t----------------------------------------");
		printf("\n\t\t   Brand Name      Ram       Price     ");
		printf("\n\t\t----------------------------------------");
	      }
	}

	for(i=0;i<6;i++)
	{
	     if(strcmp(brand,mobile_brand[i])==0)
	     {
		 check=0;

		if(strcmp(brand,mobile_brand[0])==0 || strcmp(brand,mobile_brand[2])==0)
		{
			size=7;
		}
		else
		{
			size=6;
		}

		for(j=0;j<size;j++)
		{
		    switch(i)
		     {
			 case 0 :
				printf("\n\t\t    %s          %d         %d ",brand,realme_ram[j],realme_price[j]);
				break;

			 case 1 :
				printf("\n\t\t    %s           %d         %d ",brand,oppo_ram[j],oppo_price[j]);
				break;

			 case 2 :
				printf("\n\t\t    %s            %d         %d ",brand,vivo_ram[j],vivo_price[j]);
				break;

			 case 3 :
				printf("\n\t\t    %s            %d         %d ",brand,poco_ram[j],poco_price[j]);
				break;

			 case 4 :
				printf("\n\t\t    %s         %d         %d ",brand,samsung_ram[j],samsung_price[j]);
				break;

			 case 5 :
				printf("\n\t\t    %s          %d         %d ",brand,nokia_ram[j],nokia_price[j]);
				break;
		     }
		}

	     }

	}

	     if(check==0)
	     {
		delay(2000);
	     }

	     if(check!=0)
	     {
		  printf("\n\n\t\tSorry No Result Found.......!");
		  delay(1000);
	     }

	a:
	printf("\n\n\n\t\tPRESS 1 To Filter Again \n\t\tPRESS 2 TO Go Home");
	printf("\n\n\t\tEnter Choice : ");
	scanf("%d",&choice);

	if(choice==1)
	{
	     goto again;
	}

	else if(choice==2)
	{
	      return;
	}
	else
	{
	    printf("\n\n\t\tInvalid Choice....!   try again\n\t");
	    goto a;
	}

}

void filter_ram()
{
	int i,choice,check;
	int ram;

	again:

	check=1;

	clrscr();

	printf("\n\n\t___________MOBILE FILTERING ON THE BASIS OF RAM___________");

	printf("\n\n\n\tEnter Mobile Ram (in GB) : ");
	scanf("%d",&ram);

	if(ram<2 || ram>16)
	{
	   printf("\n\n\t\tNo Result Found....!    try again.\n\t");
	   delay(1000);
	   goto down;
	}
	else
	{
	    for(i=0;i<7;i++)
	    {
		 if(ram==realme_ram[i] || ram==vivo_ram[i])
		 {
			check=0;
		 }
	    }
	    for(i=0;i<6;i++)
	    {
		if(ram==poco_ram[i] || ram==oppo_ram[i] || ram==samsung_ram[i] || ram==nokia_ram[i])
		{
			check=0;
		}
	    }

	    if(check!=1)
	    {
	       printf("\n\n\t\t----------------------------------------");
	       printf("\n\t\t   Brand Name      Ram       Price      ");
	       printf("\n\t\t----------------------------------------");
	    }
	    for(i=0;i<7;i++)
	    {
		 if(ram==realme_ram[i])
		 {
		   printf("\n\t\t    %s          %d         %d ",mobile_brand[0],realme_ram[i],realme_price[i]);
		 }
		 if(ram==vivo_ram[i])
		 {
		   printf("\n\t\t    %s            %d         %d ",mobile_brand[2],vivo_ram[i],vivo_price[i]);
		 }
	    }

	    for(i=0;i<6;i++)
	    {
		 if(ram==oppo_ram[i])
		 {
		   printf("\n\t\t    %s            %d         %d ",mobile_brand[1],oppo_ram[i],oppo_price[i]);
		 }

		 if(ram==poco_ram[i])
		 {
		   printf("\n\t\t    %s            %d         %d ",mobile_brand[3],poco_ram[i],poco_price[i]);
		 }

		 if(ram==samsung_ram[i])
		 {
		   printf("\n\t\t    %s         %d         %d ",mobile_brand[4],samsung_ram[i],samsung_price[i]);
		 }

		 if(ram==nokia_ram[i])
		 {
		   printf("\n\t\t    %s           %d         %d ",mobile_brand[5],nokia_ram[i],nokia_price[i]);
		 }
	    }
	    delay(1000);
	}

	if(check==1)
	{
	   printf("\n\n\t\tSorry No Result found....!");
	   delay(1000);
	}

	down:
	a:
	printf("\n\n\n\t\tPRESS 1 To Filter Again \n\t\tPRESS 2 TO Go Home");
	printf("\n\n\t\tEnter Choice : ");
	scanf("%d",&choice);

	if(choice==1)
	{
	     goto again;
	}

	else if(choice==2)
	{
	      return;
	}
	else
	{
	    printf("\n\n\t\tInvalid Choice....!   try again");
	    goto a;
	}


}

void filter_price()
{
	int i,choice,check;
	int price;

	again:

	check=1;

	clrscr();

	printf("\n\n\t___________MOBILE FILTERING ON THE BASIS OF PRICE___________");

	printf("\n\n\n\tEnter Mobile Price : ");
	scanf("%d",&price);


	    for(i=0;i<7;i++)
	    {
		 if(price==realme_price[i] || price==vivo_price[i])
		 {
			check=0;
		 }
	    }
	    for(i=0;i<6;i++)
	    {
		if(price==poco_price[i] || price==oppo_price[i] || price==samsung_price[i] || price==nokia_price[i])
		{
			check=0;
		}
	    }

	    if(check!=1)
	    {
	       printf("\n\n\t\t----------------------------------------");
	       printf("\n\t\t   Brand Name      Ram       Price      ");
	       printf("\n\t\t----------------------------------------");
	    }
	    for(i=0;i<7;i++)
	    {
		 if(price==realme_price[i])
		 {
		   printf("\n\t\t    %s          %d         %d ",mobile_brand[0],realme_ram[i],price);
		 }
		 if(price==vivo_price[i])
		 {
		   printf("\n\t\t    %s            %d         %d ",mobile_brand[2],vivo_ram[i],price);
		 }
	    }

	    for(i=0;i<6;i++)
	    {
		 if(price==oppo_price[i])
		 {
		   printf("\n\t\t    %s            %d         %d ",mobile_brand[1],oppo_ram[i],price);
		 }

		 if(price==poco_price[i])
		 {
		   printf("\n\t\t    %s            %d         %d ",mobile_brand[3],poco_ram[i],price);
		 }

		 if(price==samsung_ram[i])
		 {
		   printf("\n\t\t    %s         %d         %d ",mobile_brand[4],samsung_ram[i],price);
		 }

		 if(price==nokia_price[i])
		 {
		   printf("\n\t\t    %s           %d         %d ",mobile_brand[5],nokia_ram[i],price);
		 }
	    }

	    if(check!=1)
	    {
		delay(1000);
	    }

	if(check==1)
	{
	   printf("\n\n\t\tSorry No Result found....!");
	   delay(1000);
	}

	a:
	printf("\n\n\n\t\tPRESS 1 To Filter Again \n\t\tPRESS 2 TO Go Home");
	printf("\n\n\t\tEnter Choice : ");
	scanf("%d",&choice);

	if(choice==1)
	{
	     goto again;
	}

	else if(choice==2)
	{
	      return;
	}
	else
	{
	    printf("\n\n\t\tInvalid Choice....!   try again");
	    goto a;
	}
}