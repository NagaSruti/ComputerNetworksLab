#include<stdio.h>
 int main(){
    int windowSize,i,framesCount,frames[50];
 
    printf("Enter window size: ");
    scanf("%d",&windowSize);
 
    printf("\nEnter number of frames to transmit: ");
    scanf("%d",&framesCount);
 
    printf("\nEnter %d frames: ",framesCount);
 
    for(i = 1;i <= framesCount;i++)
        scanf("%d",&frames[i]);
 
    printf("\nWith sliding window protocol the frames will be sent in the following manner (assuming no corruption of frames)\n\n");
    printf("After sending %d frames at each stage sender waits for acknowledgement sent by the receiver\n\n",windowSize);
 
    for(i = 1;i <= framesCount;i++){
        if(i % windowSize == 0){
            printf("%d\n",frames[i]);
            printf("Acknowledgement of above frames sent is received by sender\n\n");
        }
        else{
            printf("%d ",frames[i]);
        }
    }
 
    if(framesCount % windowSize != 0){
        printf("\nAcknowledgement of above frames sent is received by sender\n");
    }
    return 0;
}