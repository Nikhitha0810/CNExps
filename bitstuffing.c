#include<stdio.h>
#include<string.h>
int main(){
	char flag[10] ={"01111110"};
	int i;
	char z='0';
	char msg[30];
	int count=0;
	char stuffed[50];
	printf("enter bit string");
	scanf("%s",msg);

	strcpy(stuffed,flag);

	for(i=0;i< strlen(msg);i++){
	
	if(msg[i] == '1'){
		
		count++;
			if(count == 5){
			strncat(stuffed,msg+i,1);
			strncat(stuffed,&z,1);
		}
			else{
			strncat(stuffed,msg+i,1);
		}
	}	
	else{
		count = 0;
		strncat(stuffed,msg+i,1);
	}
	
	}
    strcat(stuffed,flag);
	printf("the stuffed bitstring is : %s",stuffed);
	return 0;
}


