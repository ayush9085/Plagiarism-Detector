// intro.c
#include <stdio.h>
#include <stdlib.h>

void showIntro() {
    system("clear");   // Clear terminal in macOS/Linux

    printf("=============================================================\n");
    printf("                  MINI PROJECT SYNOPSIS\n");
    printf("=============================================================\n\n");

    printf("   Project Title : Plagiarism Detection System\n");
    printf("   Submitted By  : Ayush Pandey\n");
    printf("   SAP ID        : 590025256\n");
    printf("   Batch         : B10\n");
    printf("   College       : UPES, School of Computer Science\n");
    printf("   Submitted To  : Professor Pankaj Badoni\n\n");

    printf("=============================================================\n");
    printf("             Press Enter to continue...\n");
    printf("=============================================================\n");

    getchar();  // Waits for Enter key
}
