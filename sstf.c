#include<stdio.h>
#include<stdlib.h>
int main()
{
 int i,j,sum=0,n,pos,trc,ind,temp;
 printf("Enter number of tracks: "); 
 scanf("%d",&n);
 printf("Enter position of head: ");
 scanf("%d",&pos);
 printf("Enter the no of tracks you want to traverse: ");
 scanf("%d",&trc);
 
 int ar[trc]; //ar is the queue 
 printf("Enter tracks of disk queue: ");
 for(i=0;i<trc;i++)
     scanf("%d",&ar[i]);
 
 
 for(i=0;i<trc;i++)
 {
 	int st = 1000;
 	for(j=0;j<trc;j++)
 	{
 	    if((abs(pos-ar[j])) == st)
 	    {
 	    	if(ar[j]>ar[ind])
 			    ind =j;
		    else
 			    ind =ind;  
		 }
 	   
 		if( (abs(pos-ar[j])) < st && st>0)
 		{
 			st=abs(pos-ar[j]);
 			ind =j;
    	}
	 }
  
    pos=ar[ind];
    ar[ind]=10000;
    printf("New pos is %d",pos);
    sum+=st;	
		 
 }
 printf("\nSeek Time is %d units",sum);
 return 0;
}
