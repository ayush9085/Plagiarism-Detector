// intro.c  (macOS / VS Code)
// Animated, subtle-colored intro for the Plagiarism Detector project
// Compile: gcc intro.c -o intro_test
// Or: gcc src/*.c -o plag_detector  (if you include this file in src)

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>   // usleep
#include <string.h>

#define COLOR_CYAN    "\033[1;36m"
#define COLOR_YELLOW  "\033[1;33m"
#define COLOR_BOLD    "\033[1m"
#define COLOR_DIM     "\033[2m"
#define COLOR_RESET   "\033[0m"

static int animations_enabled(void) {
    const char *env = getenv("ANIMATE");
    if (!env) return 1;            // default: animation ON
    if (strcmp(env, "0") == 0) return 0;
    return 1;
}

// Print string char-by-char with small delay (typewriter effect)
static void print_slow(const char *s, useconds_t char_delay) {
    size_t i = 0;
    while (s[i]) {
        putchar(s[i]);
        fflush(stdout);
        if (animations_enabled()) usleep(char_delay);
        i++;
    }
}

// Print a full line with typewriter effect and a short pause after the line
static void show_line(const char *s, useconds_t char_delay, useconds_t after_delay) {
    print_slow(s, char_delay);
    putchar('\n');
    fflush(stdout);
    if (animations_enabled()) usleep(after_delay);
}

void showIntro(void) {
    // timing (tweak these if you want faster/slower)
    const useconds_t CHAR_DELAY = 20000;   // 20ms per character
    const useconds_t LINE_DELAY = 160000;  // 160ms between lines
    const useconds_t TITLE_DELAY = 400000; // longer pause after title

    // clear screen
    system("clear");

    // A little top spacing
    putchar('\n');
    putchar('\n');

    // Title (centered-ish) with subtle cyan highlight
    char *title_line1 = "                      " COLOR_CYAN COLOR_BOLD "TEXT SIMILARITY PLAGIARISM PROJECT" COLOR_RESET;
    show_line(title_line1, CHAR_DELAY, TITLE_DELAY);

    // divider (dim)
    char *divider = "                      " COLOR_DIM "------------------------------------------" COLOR_RESET;
    show_line(divider, CHAR_DELAY, LINE_DELAY);

    putchar('\n');

    // Details: label in bold, value in yellow for subtle highlight
    show_line("   " COLOR_BOLD "Project Title:" COLOR_RESET "   " COLOR_YELLOW "Plagiarism Detection System Using Text Similarity" COLOR_RESET, CHAR_DELAY, LINE_DELAY);
    putchar('\n');

    show_line("   " COLOR_BOLD "Submitted By:" COLOR_RESET "    " COLOR_YELLOW "Ayush Pandey" COLOR_RESET, CHAR_DELAY, LINE_DELAY);
    show_line("   " COLOR_BOLD "SAP ID:" COLOR_RESET "          " COLOR_YELLOW "590025256" COLOR_RESET, CHAR_DELAY, LINE_DELAY);
    show_line("   " COLOR_BOLD "Batch:" COLOR_RESET "           " COLOR_YELLOW "B10" COLOR_RESET, CHAR_DELAY, LINE_DELAY);
    show_line("   " COLOR_BOLD "College:" COLOR_RESET "         " COLOR_YELLOW "UPES, School of Computer Science" COLOR_RESET, CHAR_DELAY, LINE_DELAY);
    show_line("   " COLOR_BOLD "Submitted To:" COLOR_RESET "    " COLOR_YELLOW "Professor Pankaj Badoni" COLOR_RESET, CHAR_DELAY, LINE_DELAY);

    putchar('\n');

    // Footer instruction: dim and polite
    show_line("   " COLOR_DIM "Press Enter to continue..." COLOR_RESET, CHAR_DELAY, LINE_DELAY);

    // Small animated dots while waiting (non-blocking visual) — only if animations enabled
    if (animations_enabled()) {
        // print a single dot cycle to show responsiveness until user presses Enter
        // but we will still use getchar() to wait
        putchar(' ');
        fflush(stdout);
        usleep(120000);
    }

    // Wait for Enter key
    int c = getchar();
    (void)c; // silence unused-warning if needed
}
