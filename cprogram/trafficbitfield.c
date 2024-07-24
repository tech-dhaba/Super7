#include <stdio.h>
struct TrafficLight {
    unsigned int red : 1;    
    unsigned int yellow : 1;
    unsigned int green : 1; 
};
void turnOnRed(struct TrafficLight *light) {
    light->red = 1;
    light->yellow = 0;
    light->green = 0;
}
void turnOnYellow(struct TrafficLight *light) {
    light->red = 0;
    light->yellow = 1;
    light->green = 0;
}
void turnOnGreen(struct TrafficLight *light) {
    light->red = 0;
    light->yellow = 0;
    light->green = 1;
}
void turnOffLights(struct TrafficLight *light) {
    light->red = 0;
    light->yellow = 0;
    light->green = 0;
}
void checkTrafficLight(struct TrafficLight light) {
    if (light.red) {
        printf("Traffic light is RED\n");
    } else if (light.yellow) {
        printf("Traffic light is YELLOW\n");
    } else if (light.green) {
        printf("Traffic light is GREEN\n");
    } else {
        printf("Traffic light is OFF\n");
    }
}

int main() {
    struct TrafficLight trafficLight = {0}; 
    turnOnRed(&trafficLight);
    checkTrafficLight(trafficLight);
    turnOnGreen(&trafficLight);
    checkTrafficLight(trafficLight);
    turnOnYellow(&trafficLight);
    checkTrafficLight(trafficLight);
    turnOffLights(&trafficLight);
    checkTrafficLight(trafficLight);
    return 0;
}

