#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main(){
    char startDeli, endDeli;
    char escChar[] = "esc";
    int size,i = 0,j = 0;
    
    printf("Enter the size of input: ");
    scanf("%d",&size);

    int outSize = size*3;
    char *input = malloc(size*sizeof(char));
    char *output = malloc(outSize*sizeof(char));

    printf("Enter the input: ");
    scanf("%s",input);
    getchar();
    printf("Enter the starting delimiter: ");
    scanf("%c",&startDeli);
    getchar();
    printf("Enter the ending delimiter: ");
    scanf("%c",&endDeli);
    getchar();
   
    output[j] = startDeli;
    j++;
    
    while(i < size){
        if(input[i] != startDeli && input[i] != endDeli){
            output[j] = input[i];
            j++;
        }
        else{
            strcat(output,escChar);
            j = j+3;
            output[j] = input[i];
            j++;
        }
        i++;
    }

    strcat(output,&endDeli);
    printf("The output is : %s\n",output);
    return 0;
}
