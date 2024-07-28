#include <stdio.h>

int is_power_of_two(unsigned int num) {
    return (num > 0) && ((num & (num - 1)) == 0);

}
int main() {
    unsigned int a = 2048;
    unsigned int b = 3342;
    printf("%u is %s a power of two.\n",a, is_power_of_two(a) ? "" : "not");
    printf("%u is %s a power of two.\n",b, is_power_of_two(b) ? "" : "not");
    return 0;
}

