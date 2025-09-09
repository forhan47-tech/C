#include <stdio.h>

union Result {
    int code;
    float value;
};

union Result getResult() {
    union Result r;

    r.value = 99.9;  
    return r;
}

int main() {
    union Result res = getResult();
    
    printf("Returned Value: %.2f\n", res.value);
    return 0;
}

