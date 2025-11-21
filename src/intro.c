 #include <stdio.h>
#include <stdlib.h>

void showIntro(void) {
    system("clear");

    printf("\n\n");

    // Clean, minimal, professional title
    printf("                      \033[1;36mTEXT SIMILARITY PLAGIARISM PROJECT\033[0m\n");
    printf("                      ------------------------------------------\n\n");

    // Subtle highlight on important values, but no animation
    printf("   \033[1mProject Title:\033[0m   Plagiarism Detection System Using Text Similarity\n\n");

    printf("   \033[1mSubmitted By:\033[0m    Ayush Pandey\n");
    printf("   \033[1mSAP ID:\033[0m          590025256\n");
    printf("   \033[1mBatch:\033[0m           B10\n");
    printf("   \033[1mCollege:\033[0m         UPES, School of Computer Science\n");
    printf("   \033[1mSubmitted To:\033[0m    Professor Pankaj Badoni\n\n");

    // Footer – subtle/dim
    printf("   \033[2mPress Enter to continue...\033[0m\n\n");

    getchar();
}
