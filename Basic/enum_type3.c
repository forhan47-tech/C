#include <stdio.h>

enum TrafficLight { RED, YELLOW, GREEN };

int main() {
    enum TrafficLight signal = YELLOW;

    switch (signal) {
        case RED: printf("Stop\n"); break;
        case YELLOW: printf("Get Ready\n"); break;
        case GREEN: printf("Go\n"); break;
    }

    return 0;
}
