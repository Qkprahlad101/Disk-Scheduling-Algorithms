#include<stdio.h>
int main()
{
 int i,j,sum=0,n,pos,trc;
 printf("Enter number of tracks: "); 
 scanf("%d",&n);
 printf("Enter position of head: ");
 scanf("%d",&pos);
 printf("Enter the no of tracks you want to traverse: ");
 scanf("%d",&trc);
 
 int ar[trc],tmp[trc]; //ar is the queue 
 printf("Enter elements of disk queue: ");
 for(i=0;i<trc;i++)
 {
     scanf("%d",&ar[i]);
     tmp[i]=pos-ar[i];
 	 if(tmp[i]<0)
       tmp[i]=ar[i]-pos;
    
	 pos=ar[i];
     sum=sum+tmp[i];
 }

 printf("\nSeek Time is %d units",sum);
 return 0;
}
