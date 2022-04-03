#include "function.h"
#include "moviedetails.c"
#include<string.h>

struct movie_details person[300];
void reserveticket(int *array,int price,int selection )
{
		int p,k;
		int count =0;
		int id1 = 1000;
		printf("\n                                SCREEN\n\n\n");
		for (p=1;p<=100;p++)
		{
			if (array[p]==0)
				printf("%d\t",p);
			else
				printf("*\t",p);
			if(p%10==0)
				printf("\n\n");
		}
		printf("Please enter your name: ");
		scanf(" %19[^\n]%*[^\n]",&person[count].name);
		printf("Please enter your phone number: ");
		scanf("%u",&person[count].phoneno);
		printf("Please select seat number you want? ");
		scanf("%d",&k);
		if (k>100||k<1)
			{
				printf("seat1 number is unavailable in this theater\n");
				printf("Please re-enter seat number: ");
				scanf("%d",&k);
			}
		if (array[k]==1)
			{
				printf("Sorry, this ticket is already booked! Please choose another seat.\n");
				scanf("%d",&k);
			}
		else
			array[k]=1;
		person[count].seatnum=k;
		if (selection==1)
			show1(k,person[count].name,id1,price);
		else if (selection==2)
			show2(k,person[count].name,id1,price);
		else
			show3(k,person[count].name,id1,price);
		id1++;
}