#include<stdio.h>
void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
void bubbleSort(int arr[], int n) 
{ 
   int i, j; 
   for (i = 0; i < n-1; i++)       
  
       // Last i elements are already in place    
       for (j = 0; j < n-i-1; j++)  
           if (arr[j] > arr[j+1]) 
              swap(&arr[j], &arr[j+1]); 
} 

int main()
{
 int i,j,sum=0,n,pos,trc,d,lr=-1,sm=10000,ind=0;
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
 
 bubbleSort(ar,trc);
 for(i=0;i<trc;i++)
 {
 	if(pos==ar[i])
 	   ind=i;
 }
 
 switch(d)
{
	
	case 0: sum=(ar[trc-1]-ar[0]) + (ar[trc-1]-pos) + (ar[ind-1]-ar[0]);
			break;
			
	case 1: sum=(ar[trc-1]-ar[0]) + (pos-ar[0]) + (ar[trc-1]-ar[ind+1]);
			break;
			
	default:printf("wrong choice");
	        break;
			
}
 printf("\nSeek Time is %d units",sum);
 
 return 0;
}
