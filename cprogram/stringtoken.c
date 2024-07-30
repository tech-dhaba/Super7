#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char** tokenize_string(const char* str, const char* delimiter, int* token_count) {
    char* temp_str = strdup(str);
    if (temp_str == NULL) {
        printf("Error: Memory allocation failed");
        exit(EXIT_FAILURE);
    }
    char** tokens = NULL;
    *token_count = 0;
    char* token = strtok(temp_str, delimiter);
    while (token != NULL) {
        tokens = (char**)realloc(tokens, (*token_count + 1) * sizeof(char*));
        if (tokens == NULL) {
            printf("Error: Memory allocation failed");
            exit(EXIT_FAILURE);
        }
        tokens[*token_count] = strdup(token);
        if (tokens[*token_count] == NULL) {
            printf("Error: Memory allocation failed");
            exit(EXIT_FAILURE);
        }
        (*token_count)++;
        token = strtok(NULL, delimiter);
    }
    free(temp_str);
    return tokens;
}
void free_tokens(char** tokens, int token_count) {
    if (tokens == NULL) return;

    for (int i = 0; i < token_count; i++) {
        free(tokens[i]);
    }
    free(tokens);
}
int main() {
    const char* input_string = "Hello!my!name!is!tejsaw!bhasker";
    const char* delimiter = "!";
    int token_count;
    char** tokens = tokenize_string(input_string, delimiter, &token_count);
    for (int i = 0; i < token_count; i++) {
        printf("Token %d: %s\n", i + 1, tokens[i]);
    }
    free_tokens(tokens, token_count);
    return 0;
}

