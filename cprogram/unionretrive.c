#include <stdio.h>
union IntFloatUnion {
    int intValue;
    float floatValue;
};
enum DataType {
    INTEGER,
    FLOAT
};
struct Number {
    union IntFloatUnion data;
    enum DataType type;
};
void storeInteger(struct Number *num, int value) {
    num->data.intValue = value;
    num->type = INTEGER;
}
void storeFloat(struct Number *num, float value) {
    num->data.floatValue = value;
    num->type = FLOAT;
}
void retrieveValue(struct Number num) {
    if (num.type == INTEGER) {
        printf("Stored integer value: %d\n", num.data.intValue);
    } else if (num.type == FLOAT) {
        printf("Stored float value: %.2f\n", num.data.floatValue);
    } else {
        printf("Unknown data type stored in union.\n");
    }
}
int main() {
    struct Number num;
    storeInteger(&num, 42);
    retrieveValue(num);
    storeFloat(&num, 3.14);
    retrieveValue(num);
    return 0;
}

