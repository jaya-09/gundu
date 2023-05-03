#include <stdio.h>
#include <string.h>

#define SIZE 100

int main() {
    char frame[SIZE];
    int numFrames, numBytes, i;

    printf("Enter the number of frames: ");
    scanf("%d", &numFrames);

    // Consume the newline character left behind by scanf
    getchar();

    // Read in the frames and perform operations on each frame
    for (i = 0; i < numFrames; i++) {
        printf("Enter frame %d: ", i+1);
        fgets(frame,SIZE, stdin);
            
        // Remove the trailing newline character from fgets
       frame[strcspn(frame, "\n")] = '\0';

       
       
        numBytes=strlen(frame);
        printf("Number of bytes in the frame: %d\n", numBytes);

       
        
        printf("Received Frame: %s\n", frame);
    }

    return 0;
}




