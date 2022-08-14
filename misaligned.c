#include <stdio.h>
#include <assert.h>
#include <cstring>
const int MAX_COLORPAIR_NAME_CHARS = 16;
char* colorMap[25];

void printColorMap() {
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    int i = 0, j = 0;
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            char buffer[MAX_COLORPAIR_NAME_CHARS];
            sprintf(buffer, "%s | %s", majorColor[i], minorColor[i]);
            colorMap[i * 5 + j] = buffer;
            printf("%d | %s\n", i * 5 + j, colorMap[i * 5 + j] );
        }
    }
    return;
}

int main() {
    printColorMap();
    char buffer[MAX_COLORPAIR_NAME_CHARS];
    sprintf(buffer, "%s | %s", "White | Blue");
    int result = strcmp(colorMap[1], buffer);
    assert(result == 0);
    //assert(strcmp(colorMap[1], "White | Blue") == 0);
    //assert(strcmp(colorMap[2], "| White | Orange") == 0);
    printf("All is well (maybe!)\n");
    return 0;
}
