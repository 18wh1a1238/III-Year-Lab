#include<stdio.h>
 int main(){
     
   int n,count=0;
   
   printf("Enter no. frames: ");
   scanf("%d",&n);
   
   int databits[50] , stuffData[50],j=0;
   
   printf("Enter DataBits:\n");
   
   for(int i=0;i<n;i++){
     scanf("%d",&databits[i]);
    }
    
   for(int i=0;i<n;i++){
     if(databits[i] == 1){
         count++;
       } else{
          count = 0;
       }
       
     stuffData[j] = databits[i];
     j++;
     if(count==5 && i!=n-1){
           count = 0;
           stuffData[j] = 0;
            j++;
        }
  }
printf("\nSender");
printf("\nAfter  Bitstuffing: 01111110 ");

for(int i=0;i<j;i++){
    printf("%d",stuffData[i]);
 }

    printf(" 01111110\n");

    printf("\nReceiver");
    printf("\nData received: 01111110 ");

for(int i=0;i<j;i++){
    printf("%d",stuffData[i]);
 }
    printf(" 01111110");
    printf("\nAfter De-Stuffing : ");
    
count=0;
for(int i=0;i<j;i++){
   if(stuffData[i] == 1){
   count++;
  } else{
     count=0;
 }
printf("%d",stuffData[i]);
if(count==5){
   i++;
  }
}
printf("\n");
return 0;
}
