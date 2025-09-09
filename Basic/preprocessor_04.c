#include <stdio.h>
#define DEBUG

#ifdef DEBUG
void logDebug() {
    printf("Debugging is enabled.\n");
}
#endif

int main() {
#ifdef DEBUG
    logDebug();
#endif
  return 0;
}
