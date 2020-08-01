#include<stdio.h>
#include<conio.h>
void  dinein(float gtotal);
void takeaway(float gtotal);
void starline()
{
	int i;
	for(i=0;i<=70;++i)
		putchar('*');
}
int fun_count(int m)
{
	int i,count=0;
	for(i=1;i<=m;++i)
		count++;
	return count;
}
int fun_total(int price,int m)
{
	int i,total;
//	if(a==1)
  //		total=total+(price*m);
  //	else if(a==0)
		total=price*m;
	return total;
}
void main()
{

	FILE *bapu;
	char p;
	int i,m,n,w,a=1,t;
	int ch;
	int countp1,countp2,countp3,countp4,totalp1=0,totalp2=0,totalp3=0,totalp4=0;
	int countr1,countr2,countr3,totalr1=0,totalr2=0,totalr3=0;
	int countd1,countd2,totald1=0,totald2=0;
	int countc1,countc2,totalc1=0,totalc2=0;
	int totalp=0,totalc=0,totald=0,totalr=0;
	float gtotal=0;
	clrscr();
	gotoxy(1,5);
	printf("		       @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
	gotoxy(1,10);
	printf("   ");
	starline();
	printf("\n	     ---------***** WELCOME TO RESTAURANT *****---------\n");
	printf("   ");
	starline();
	gotoxy(1,17);
	printf("		       @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
	getch();
	clrscr();
	//first we open file for resaurant menu
	bapu=fopen("p1.txt","r");
	if(bapu==NULL)
	{
		printf("file 'p1.txt' can't be open");
		exit(0);
	}
	while(1)
	{
		p=fgetc(bapu);
		if(p==EOF)
			break;
		printf("%c",p);
	}
	//fclose(bapu) see line **no.293**
	      //	printf("\n   Now it's time to have a dinner");
	punjabi:
	printf("would you like to order Punjabi dish(yes=1,no=0):");
	scanf("%d",&n);
			if(n==0)
				goto roti;
			else if(n==1)
			{
			do
			{
			printf("\nChoose dishes:");
			scanf("%d",&ch);
				switch(ch)
				{
					case 1:
					 printf("How many dishes of 'Kaju Paneer Masala':");
					 scanf("%d",&m);
					 countp1=fun_count(m);
					 totalp1=totalp1+fun_total(120,m);
					 printf("quan %d total %d",countp1,totalp1);
					 break;
					case 2:
					 printf("How many dishes of 'Kaju Kari':");
					 scanf("%d",&m);
					 countp2=fun_count(m);
					 totalp2=totalp2+fun_total(110,m);
					 printf("quan %d \n total %d",countp2,totalp2);
					 break;
					case 3:
					 printf("How many dishes of 'Paneer Kofta':");
					 scanf("%d",&m);
					 countp3=fun_count(m);
					 totalp3=totalp3+fun_total(115,m);
					 printf("quan %d \n total %d",countp3,totalp3);
					 break;
					case 4:
					 printf("How many dishes of 'Paneer Tikka':");
					 scanf("%d",&m);
					 countp4=fun_count(m);
					 totalp4=totalp4+fun_total(110,m);
					 printf("quan %d \n total %d",countp4,totalp4);
					 break;
					default:
					 printf("Invalid input\n");
					 goto punjabi;
				}
			printf("\nwould you like to order more 'Punjabi dish'?(y=1/n=0)");
			scanf("%d",&a);
			if(a!=1 && a!=0)
			{
				printf("invalid input");
				goto punjabi;
			}
		       }while(a==1);
		       }
		       else
			goto punjabi;
	roti:
	printf("would you like to choose 'Roti'(yes=1,no=0):");
	scanf("%d",&n);
			if(n==0)
				goto papad;
			else if(n==1)
			{
			do
			{
			printf("\nChoose Roti:");
			scanf("%d",&ch);
				switch(ch)
				{
					case 1:
					 printf("How many Butter 'Roti':");
					 scanf("%d",&m);
					 countr1=fun_count(m);
					 totalr1=totalr1+fun_total(8,m);
					 printf("quan %d \n total %d",countr1,totalr1);
					 break;
					case 2:
					 printf("How many 'Chapati':");
					 scanf("%d",&m);
					 countr2=fun_count(m);
					 totalr2=totalr2+fun_total(8,m);
					 printf("quan %d \n total %d",countr2,totalr2);
					 break;
					case 3:
					 printf("How many 'Kulcha':");
					 scanf("%d",&m);
					 countr3=fun_count(m);
					 totalr3=totalr3+fun_total(8,m);
					 printf("quan %d \n total %d",countr3,totalr3);
					 break;
					default:
					 printf("Invalid input\n");
					 goto roti;

				}
			printf("\nwould you like to order more 'ROTI'?(y=1/n=0)");
			scanf("%d",&a);
			if(a!=1 && a!=0)
			{
				printf("invalid input");
				goto roti;
			}
		       }while(a==1);
		       }
		       else
			goto roti;
	papad:
	printf("would you like to choose papad(yes=1,no=0):");
	scanf("%d",&n);
			if(n==0)
				goto buttermilk;
			else if(n==1)
			{
			do
			{
			printf("\nChoose Papad:");
			scanf("%d",&ch);
				switch(ch)
				{
					case 1:
					 printf("How many 'Rosted Papad':");
					 scanf("%d",&m);
					 countd1=fun_count(m);
					 totald1=totald1+fun_total(5,m);
					 printf("quan %d \n total %d",countd1,totald1);
					 break;
					case 2:
					 printf("How many 'Masala Papad':");
					 scanf("%d",&m);
					 countd2=fun_count(m);
					 totald2=totald2+fun_total(10,m);
					 printf("quan %d \n total %d",countd2,totald2);
					 break;
					default:
					 printf("Invalid input\n");
					 goto papad;

				}
			printf("\nwould you like to order more 'papad'?(y=1/n=0)");
			scanf("%d",&a);
			if(a!=1 && a!=0)
			{
				printf("invalid input");
				goto papad;
			}
		       }while(a==1);
		       }
		       else
			goto papad;
	buttermilk:
	printf("would you like to drink 'ButterMilk'(yes=1,no=0):");
	scanf("%d",&n);
			if(n==0)
				goto bill;
			else if(n==1)
			{
			do
			{
			printf("\nChoose ButterMilk:");
			scanf("%d",&ch);
				switch(ch)
				{
					case 1:
					 printf("How many 'Jeera chhas':");
					 scanf("%d",&m);
					 countc1=fun_count(m);
					 totalc1=totalc1+fun_total(10,m);
					 printf("quan %d \n total %d",countc1,totalc1);
					 break;
					case 2:
					 printf("How many 'Punjabi Lassi':");
					 scanf("%d",&m);
					 countc2=fun_count(m);
					 totalc2=totalc2+fun_total(15,m);
					 printf("quan %d \n total %d",countc2,totalc2);
					 break;
					default:
					 printf("Invalid input\n");
					 goto buttermilk;

				}
			printf("\nwould you like to order more 'ButterMilk'?(y=1/n=0)");
			scanf("%d",&a);
			if(a!=1 && a!=0)
			{
				printf("invalid input");
				goto buttermilk;
			}
		       }while(a==1);
		       }
		       else
			goto buttermilk;
		       //now order is taken
	bill:
	printf("\n\n	your bill is under processing...\n\n");

		totalp=totalp1+totalp2+totalp3+totalp4;
		totalr=totalr1+totalr2+totalr3;
		totald=totald1+totald2;
		totalc=totalc1+totalc2;
		gtotal=0;
		gtotal=totalp+totalr+totald+totalc;
		printf("\n\nYour Grand Total is %.2f",gtotal);
		order:
		printf("\n\nDo you want to dine in or take away?\n");
		printf("1) Dine in 	2)Take away\n");
		scanf("%d",&w);
		switch(w)
		{
			case 1:dinein(gtotal);
				break;
			case 2:takeaway(gtotal);
				break;
			default:printf("invalid input\n");
				goto order;
		}
      getch();
      clrscr();
      printf("\n\n\n\n");
      starline();
      printf("\n\n");
      starline();
      printf("\n\n\n\n\n\t\t\t******THANKS FOR VISTING*****\n\n\n\n\n");
      starline();
      printf("\n\n");
      starline();
      fclose(bapu);
      getch();
}
void dinein(float gtotal)
{
int t;
float ltotal;
printf("\nTotal price of 'dining in' including 5%% govt. tax and 10%% dining in charges:\n\n");
pay1:
printf("Select payment method:\n\t1-->Cash Payment\t2-->Credit Card");
scanf("%d",&t);
switch(t)
{
	case 1:ltotal=gtotal*(1.15);
		printf("\n\n\nU have to pay rupees:%.2f",ltotal);
		break;
	case 2: printf("\nthere will be 2%% charge on any card:");
		ltotal=gtotal*(1.173);
		printf("\n\n\nYou have to pay rupees:%.2f",ltotal);
		break;
	default:printf("invalid input\n");
		goto pay1;
}
}
void takeaway(float gtotal)
{
int t;
float ltotal;
printf("\nTotal price of 'take away' including 5%% govt. tax and 5%% dining charges:\n\n");
pay2:
printf("Select payment method:\n\t1-->Cash Payment\t2-->Credit Card");
scanf("%d",&t);
switch(t)
{
	case 1:ltotal=gtotal*(1.10);
		printf("\n\n\nYou have to pay rupees:%.2f",ltotal);
		break;
	case 2: printf("\nthere will be 2%% charge on any card:");
		ltotal=gtotal*(1.122);
		printf("\n\n\nYou have to pay rupees:%.2f",ltotal);
		break;
	default:printf("invalid input\n");
		goto pay2;
}
}

