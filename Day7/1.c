#include <stdio.h>
int Ab(const char* s) {
    long long ans = 0;
    while (*s != '\0') {
        ans = (10 * ans + (*s - '0'));
        s++;
    }
    return ans;
}
int main(int argc, char **argv) {
	int result =0;
    printf("%d\n", argc);
    for (int i=1; i < argc; i++) {
        printf("%d: %s\n", i, argv[i]);
    }
    for (int j=1; j<argc; j++) {
        result += Ab(argv[j]); 
        if (result != -1) { 
            printf("%d\n", result);

        }
    }

}

