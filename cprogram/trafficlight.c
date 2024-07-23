#include <stdio.h>
#include <unistd.h>
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"


typedef enum {
    RED,
    YELLOW,
    GREEN,
    STATE_COUNT 
} TrafficLightState;

int main (int argc, char const *argv[]) {
    int i =5;
    TrafficLightState currentState = RED;
    int emergency = 0;
    while (i) {
//	printf("is there any emergency");
//	scanf("%d",&emergency);
        switch (currentState) {
            case RED:
                printf(ANSI_COLOR_RED  "Traffic Light: RED\n"  ANSI_COLOR_RESET);
                sleep(3); 
                if (emergency) {
                    printf(ANSI_COLOR_RED  "Emergency: Jumping to FLASHING RED\n"  ANSI_COLOR_RESET );
                    emergency = 0;
                    goto FLASHING_RED;
                } else {
                    currentState = GREEN;
                }
                break;
            case YELLOW:
                printf(ANSI_COLOR_YELLOW   "Traffic Light: YELLOW\n"  ANSI_COLOR_RESET   );
                sleep(2);
                currentState = RED;
                break;
            case GREEN:
                printf(ANSI_COLOR_GREEN   "Traffic Light: GREEN\n"  ANSI_COLOR_RESET );
                sleep(5);
                currentState = YELLOW;
                break;
            default:
                printf(ANSI_COLOR_RESET    "Error: Invalid state.\n"  ANSI_COLOR_RESET );
                return 1;
        }
	i--;
    }
            FLASHING_RED:
                printf(ANSI_COLOR_RED  "Traffic Light: FLASHING RED (Emergency)\n"  ANSI_COLOR_RESET  );
                sleep(1); 
               
    return 0;
}

