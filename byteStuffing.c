#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main(){
    char startDeli[10], endDeli[10],escChar[10];
    int size,i = 0,j = 0,length = 0,count = 0;
    
    printf("Enter the size of input: ");
    scanf("%d",&size);

    int outSize = size*3;
    char *input = malloc(size*sizeof(char));
    char *output = malloc(outSize*sizeof(char));

    printf("Enter the input: ");
  
  scanf("%s",input);

    printf("Enter the starting delimiter: ");
    scanf("%s",startDeli);

    printf("Enter the ending delimiter: ");
    scanf("%s",endDeli);

    printf("Enter the escape character: ");
    scanf("%s",escChar);
    
    strcat(output,startDeli);

    while(i < size){
        //starting delimiter
        length = strlen(startDeli);
        for(int k = i;k < (i+length);k++){
            if(input[k] == startDeli[j]){
                count++;
            }
            j++;
        }
        if(count == length){
            strcat(output,escChar); 
        }
        count = 0;
        j = 0;

        //ending delimiter
        length = strlen(endDeli);
        for(int k = i;k < (i+length);k++){
            if(input[k] == endDeli[j]){
                count++;
            }
            j++;
        }
        if(count == length){
            strcat(output,escChar);
        }
        count = 0;
        j = 0;

        //escape character
        length = strlen(escChar);
        for(int k = i;k < (i+length);k++){
            if(input[k] == escChar[j]){
                count++;
            }
            j++;
        }
        if(count == length){
            strcat(output,escChar);
        }
        count = 0;
        j = 0;

        strncat(output,&input[i],1);
        i++;
    }

    strcat(output,endDeli);
    printf("The output is : %s\n",output);
    return 0;
}
