/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
 #include<stdio.h>
int main() {
	int window,sent = 0,ack,i;
	printf("Enter the window size:");
	scanf("%d",&window);
	while(1) {
		for(i=0;i<window;i++) {
			printf("Frame %d has been transmitted\n",sent);
			sent++;
			if(sent == window)
				break;
		}
		printf("\nPlease enter the last Acknowledgement received.\n");
		scanf("%d",&ack);
		if(ack == window) {
			break;
		}
		else {
			sent = ack;
		}
	}
	return 0;
}