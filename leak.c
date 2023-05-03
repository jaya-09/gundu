#include<stdio.h>
#include<stdlib.h>
#define MIN(x,y) (x>y)?y:x
int main()
{
    int outputrate,drop=0,bucketsize,x,inp[10]={0};
    printf("\n enter bucket size : ");
    scanf("%d",&bucketsize);
    printf("\n enter output rate :");
    scanf("%d",&outputrate);
   
   int i=0;
    do{
    printf("\n enter number of packets coming at second %d :",i+1);
    scanf("%d",&inp[i]);
    if(inp[i]>bucketsize)
    {
  printf("Bucket overflow\n");   
  printf("Packet Discarded\n");
  exit(0);
    }
    
    
    i++;
    printf("\n enter 1 to contiue or 0 to quit..........");
    scanf("%d",&choice);
}
while(choice);
//end of do while 

int count =0;//no of packets in bucket 
int nsec=i;
printf("\n Second \t Recieved \t Sent \t Dropped \tRemained \n");
for(i=0;count || i<nsec;i++)
{
    printf("  %d",i+1);
    printf(" \t\t%d\t ",inp[i]);
    printf(" \t%d\t ",MIN((inp[i]+count),outputrate));
    // calculate the number of packets that need to be stored in the bucket for the next second
    if((x=inp[i]+count-outputrate)>0)
    {
  if(x>bucketsize)
  {
  count=bucketsize;
  drop=x-bucketsize;
  }
  else
  {
  count=x;
  drop=0;
  }
    }
    else
    {
  drop=0;
  count=0;
    }
    printf(" \t %d\t %d \n",drop,count);
}
return 0;
}




