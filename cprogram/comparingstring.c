#include<stdio.h>
int customStrCmp(const char *str1, const char *str2) {
    while (*str1 && *str2 && *str1 == *str2) {
        str1++;
        str2++;
    }
    return *str1 - *str2;
}
int main() {
    const char *s1 = "hello";
    const char *s2 = "world";
    const char *s3 = "hello";
    printf("Comparing \"%s\" and \"%s\": %d\n", s1, s2, customStrCmp(s1, s2));
    printf("Comparing \"%s\" and \"%s\": %d\n", s1, s3, customStrCmp(s1, s3));
    printf("Comparing \"%s\" and \"%s\": %d\n", s2, s1, customStrCmp(s2, s1));
    return 0;
}
