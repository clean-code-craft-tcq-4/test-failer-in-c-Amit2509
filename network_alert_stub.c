#include <stdio.h>
#include "network_alert_stub.h"

int networkAlertStub(float celcius) {
    printf("ALERT: Temperature is %.1f celcius.\n", celcius);
    if (celcius<=THRESHOLD_TEMP)
    {
        return 200;
    }
    else
    {
        return 500;
    }
}
