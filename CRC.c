#include <stdio.h>
#include <string.h>
int main() {
	char data[100], divisor[30],temp[30],quot[100],rem[30],div1[30];
        int len_divisor,len_data;

	printf("Enter Data: ");
	scanf("%s",data);
	printf("Enter Key: ");
	scanf("%s",divisor);
	len_divisor=strlen(divisor);
	len_data=strlen(data);
	strcpy(div1,divisor);

	for(int i=0;i<len_divisor-1;i++) {
		data[len_data+i]='0';
	}

  
	for(int i=0;i<len_divisor;i++){
	    temp[i]=data[i];
	}

	for(int i=0;i<len_data;i++){
		quot[i]=temp[0]; 
		if(quot[i]=='0'){ 
		    for (int j=0;j<len_divisor;j++){
		        divisor[j]='0'; 
            }
        }    
        else{
		    for(int j=0;j<len_divisor;j++){
		        divisor[j]=div1[j];
            }
        }

		for(int j=len_divisor-1;j>0;j--) {
			if(temp[j]==divisor[j]){
			    rem[j-1]='0';
            }
            else{
			rem[j-1]='1';
            }
		}
		rem[len_divisor-1]=data[i+len_divisor]; 
		strcpy(temp,rem); 
	}
	strcpy(rem,temp); 

	printf("\nQuotient is ");
	for(int i=0;i<len_data;i++){
	    printf("%c",quot[i]);
    }
	printf("\nRemainder is ");
	for(int i=0;i<len_divisor-1;i++){
	    printf("%c",rem[i]);
    }
	printf("\nOriginal data is: ");
	for(int i=0;i<len_data;i++){
	    printf("%c",data[i]);
    }
	for(int i=0;i<len_divisor-1;i++){
	    printf("%c",rem[i]);
    }
    printf("\n");
	return 0;
}

