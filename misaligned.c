#include <stdio.h>
#include <assert.h>
const int MAX_COLORPAIR_NAME_CHARS = 16;
char* colorMap[25];

int printColorMap() {
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
    return i * j;
}

int main() {
    int result = printColorMap();
    assert(colorMap[1] == "| White | Blue");
    assert(colorMap[2] == "| White | Orange");
    printf("All is well (maybe!)\n");
    return 0;
}
