#include <stdio.h>
#include <assert.h>
#include "alerter.h"

int main() {
    alertInCelcius(400.5);
    alertInCelcius(303.6);
    assert(alertFailureCount == 1);
    printf("%d alerts failed.\n", alertFailureCount);
    printf("All is well (maybe!)\n");
    return 0;
}
