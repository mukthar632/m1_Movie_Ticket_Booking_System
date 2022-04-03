#include "function.h"
#include "moviedetails.c"
#include<string.h>

struct movie_details person[300];
void cancelticket(int *array)
{
      int Cseat,p,stop;
	  printf("Please enter ID number of ticket: ");
	  scanf("%d",&Cseat);
	  for (p=0;p<300;p++)
	  {
	  		if(Cseat==person[p].id)
	  		{
					 stop=5;
					 system("cls");
					 printf("%s your ticket is %d cancelled",person[p].name,person[p].seatnum);
					 array[person[p].seatnum]=0;
					 p=300;
	  		}
	  }
	  if (stop!=5)
	  		printf("Ticket ID number is incorrect please enter right one to cancel ticket: \n");
}