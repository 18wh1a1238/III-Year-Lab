#include <stdio.h>

int main() {
    int bsize,outrate,lines,p[25],iterations,sum=0;
    printf("Enter the bucket size and output rate:");
    scanf("%d%d",&bsize,&outrate);
    printf("Enter the number of input lines:");
    scanf("%d",&lines);
    printf("Enter the input packet rate of %d lines:",lines);
    for(int i=0;i<lines;i++)
        scanf("%d",&p[i]);
    printf("Enter the number of iterations:");
    scanf("%d",&iterations);

    for(int i=1;i<=iterations;i++){
        printf("Iteration %d\n",i);
        for(int j=0;j<lines;j++){
            sum += p[j];
            if(sum<=bsize)
                printf("Input from line %d with rate %d is added to the bucket\nCurrent bucket size is %d\n",j+1,p[j],sum);
            else{
                sum-=p[j];
                printf("Input from line %d with rate %d is thrown out bucket\nCurrent bucket size is %d\n",j+1,p[j],sum);
            }
        }
        if(sum<=outrate){
            printf("packet sent to output line at rate %d",sum);
            sum = 0;
            printf("Current bucket size is %d",sum);
        }
        else {
            sum-=outrate;
            printf("packets sent to the output line at the rate %d\ncurrent bucket size is %d\n",outrate,sum);
        }
    }
    return 0;
}