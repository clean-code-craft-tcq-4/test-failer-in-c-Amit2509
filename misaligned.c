#include <stdio.h>
#include <assert.h>
#include <string.h>
const char* colorMapMajor[25] = {};
const char* colorMapMinor[25] = {};

void printColorMap() {
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    int i = 0, j = 0;
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            colorMapMajor[i * 5 + j] = majorColor[i];
            colorMapMinor[i * 5 + j] = minorColor[j];
            printf("%d | %s | %s\n", i * 5 + j + 1, colorMapMajor[i * 5 + j], colorMapMinor[i * 5 + j] );
        }
    }
    return;
}

int main() {
    printColorMap();
    assert(strcmp(colorMapMajor[1], "White")==0);
    assert(strcmp(colorMapMinor[1], "Orange")==0);
    printf("All is well (maybe!)\n");
    return 0;
}
