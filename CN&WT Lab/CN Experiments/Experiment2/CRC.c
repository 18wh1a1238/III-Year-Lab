/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
 #include <stdio.h>
       #include <string.h>
     int main() {
    	int i,j,polynomiallen,n;
    	char d[100],d1[100], codeword[30],polynomial[30],temp[30],quotient[100],remainder[30],key1[30],Q[30],R[30];
    	
    	printf("Enter Data: ");
    	gets(d);
	strcpy(d1,d);
    	printf("Enter Polynomial: ");
    	gets(polynomial);
	polynomiallen=strlen(polynomial);
	printf("String after zeroes:");
    	polynomiallen=strlen(polynomial);
    	n=strlen(d);
    	strcpy(key1,polynomial);
    	for (i=0;i<polynomiallen-1;i++) {
    		d[n+i]='0';
    	}
        printf("%s\n",d);
    	for (i=0;i<polynomiallen;i++)
    	 temp[i]=d[i];
    	for (i=0;i<n;i++) {
    		quotient[i]=temp[0];
    		if(quotient[i]=='0')
    		 for (j=0;j<polynomiallen;j++)
    		 polynomial[j]='0'; 
		else
    		 for (j=0;j<polynomiallen;j++)
    		 polynomial[j]=key1[j];
    		for (j=polynomiallen-1;j>0;j--) {
    			if(temp[j]==polynomial[j])
    			 remainder[j-1]='0';
		       	else
    			 remainder[j-1]='1';
    		}
    		remainder[polynomiallen-1]=d[i+polynomiallen];
    		strcpy(temp,remainder);
    	}
    	strcpy(remainder,temp);
        printf("AT SENDER\n");
       printf("Data is ");
	for (i=0;i<n;i++)
	 printf("%c",quotient[i]);
    	printf("\nCRC  is ");
    	for (i=0;i<polynomiallen-1;i++)
    	 printf("%c",remainder[i]);
    	printf("\nData send by sender  is: ");
    	for (i=0;i<n;i++)
    	 printf("%c",d[i]);
    	for (i=0;i<polynomiallen-1;i++)
    	 printf("%c",remainder[i]);
	printf("\n");
	strcat(d1,remainder);
	printf("AT RECEIVER\n");
        for (i=0;i<polynomiallen;i++)
         temp[i]=d1[i];
        for (i=0;i<n;i++) {
                Q[i]=temp[0];
                if(Q[i]=='0')
                 for (j=0;j<polynomiallen;j++)
                 polynomial[j]='0'; 
                else
                 for (j=0;j<polynomiallen;j++)
                 polynomial[j]=key1[j];
                for (j=polynomiallen-1;j>0;j--) {
                        if(temp[j]==polynomial[j])
                         R[j-1]='0'; 
                        else
                         R[j-1]='1';
                }
                R[strlen(polynomial)-1]=d1[i+strlen(polynomial)];
                strcpy(temp,R);
        }
	 strcpy(R,temp);
	 int flag=0;
        for (int i=0;i<strlen(R);i++){
		if (R[i]!='0'){
		   flag = 1;
		}
		else{
			continue;
		}
	}
       if (flag == 0){
	       printf("Data Received correctly\n");
       }else{
	       printf("Error in Receiving Data\n");
       }

    	return 0;

    }