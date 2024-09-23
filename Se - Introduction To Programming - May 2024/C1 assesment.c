/*
Write a program to demonstrate a Food Billing System.
• Display the Menu using appropriate codes.
• For Menu kinds of Programming , use the core logic of
Loops/conditional statements.
• You need to strictly follow the syntaxes’s of that logic which you are
using.
• Write the necessary comments for better understanding to you as well
as to the faculty.

*/
#include<stdio.h>
#include<math.h>
int main()
{
	int choice,q,a,a1,total,ans;
	while(ans='y')
	{
	printf("------Mcdoland Menu------");
	printf("\n1.Mc aloo tikki burger			price = 60rs/pcs");
	printf("\n2.Mexican mc aloo tikki burger		price = 80rs/pcs");
	printf("\n3.Salted Fries				price = 90rs");
	printf("\n4.Peri peri Fries			price = 100rs");
	printf("\n5.Coca cola 				price = 49rs/200ML");
	printf("\n");
	printf("\nEnter Your choice:- ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("\nYou have selected Mc aloo tikki burger");
			printf("\nEnter the quantatiy :-");
			scanf("%d",&q);
			a1=q*60;
			printf("\nAmount is %d",a1);
			total= total+(q*60);
			printf("\nTotal amount is %d",total);	
			break;
		case 2:
			printf("\nYou have selected Mexican mc aloo tikki burger");
			printf("\nEnter the quantatiy :-");
			scanf("%d",&q);
			a1=q*80;
			printf("\nAmount is %d",a1);
			total= total+(q*80);
			printf("\nTotal amount is %d",total);
			break;
		case 3:
			printf("\nYou have selected Salted Fries");
			printf("\nEnter the quantatiy :-");
			scanf("%d",&q);
			a1=q*90;
			printf("\nAmount is %d",a1);
			total= total+(q*90);
			printf("\nTotal amount is %d",total);
			break;
		case 4:
			printf("\nYou have selected Peri peri Fries");
			printf("\nEnter the quantatiy :-");
			scanf("%d",&q);
			a1=q*100;
			printf("\nAmount is %d",a1);
			total= total+(q*100);
			printf("\nTotal amount is %d",total);
			break;
		case 5:
			printf("\nYou have selected Coca cola");
			printf("\nEnter the quantatiy :-");
			scanf("%d",&q);
			a1=q*49;
			printf("\nAmount is %d",a1);
			total= total+(q*49);
			printf("\nTotal amount is %d",total);
			break;
			default:
				printf("Invalid");
				break;
	}
	printf("\n\n Do You Want to Continue y/n ? : ");
		scanf(" %c",&ans);
		if(ans != 'y')
		{
			goto end;
		}
		else{
			printf("\n");
		}
}
	end:
		printf("\nTotal amount bill= %d",total);
		printf("\nThank you for visiting");
	return 0;
}
