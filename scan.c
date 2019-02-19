#include<stdio.h>
int main()
{
 int i,j,sum=0,n,pos,trc,d,lr=-1,sm=10000;
 printf("Enter number of tracks: "); 
 scanf("%d",&n);
 printf("Enter position of head: ");
 scanf("%d",&pos);
 printf("Enter the no of tracks you want to traverse: ");
 scanf("%d",&trc);
 
 int ar[trc]; //ar is the queue 
 printf("Enter elements of disk queue: ");
 for(i=0;i<trc;i++)
   scanf("%d",&ar[i]);
 
 printf("To move Left press '0' else '1'\n");
 scanf("%d",&d);
 
 
 switch(d)
{
	
	case 0: for(i=0;i<trc;i++) //finding largest input track
	        {
	        	if(ar[i]>lr)
	        	   lr=ar[i];
			} 
			printf("Largest is %d",lr);
			sum=(pos-1)+(lr-1);
			break;
			
	case 1: for(i=0;i<trc;i++) //finding largest input track
	        {
	        	if(ar[i]<sm)
	        	  sm =ar[i];
			} 
			printf("smallest is %d",sm);
			sum=(n-1-pos)+(n-1-sm);
			break;
			
	default:printf("wrong choice");
	        break;
			
}
 printf("\nSeek Time is %d units",sum);
 return 0;
}
