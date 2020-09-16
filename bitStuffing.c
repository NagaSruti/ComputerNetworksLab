#include <stdio.h>
#include <stdlib.h>
#include<string.h>

#define flag "01111110"

int main(){
    int size,i = 0, j = 8,k,count = 1;

    printf("Enter the size of input: ");
    scanf("%d",&size);

    int outSize = size*3;
    char *input = malloc(size*sizeof(char));
    char *output = malloc(outSize*sizeof(char));

    printf("Enter the input: ");
    scanf("%s",input);

    strcat(output, flag);

    while(i < size){
        if(input[i] == '0'){
            output[j] = input[i];
        }
        else{
            output[j] = input[i];
            for(k = i+1; k < size && input[k] == '1' && count < 5 ; k++){
                j++;
                output[j] = input[k];
                count++;
                if(count == 5){
                    j++;
                    output[j] = '0';
                }
 
                i = k;
            }
            
        }
        i++;
        j++;
    }
  
    output[j] = '\0';
    strcat(output,flag);
    printf("The output is : %s\n",output);
    return 0;


}
