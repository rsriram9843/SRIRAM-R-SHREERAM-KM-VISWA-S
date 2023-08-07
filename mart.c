#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char* slanted_transposition_decode(char* string, int num_rows) {
    int str_len = strlen(string);
    int num_cols = ceil((double)str_len / num_rows);
    char** matrix = (char**)malloc(num_rows * sizeof(char*));
    for (i = 0; i < num_rows; i++) {
        matrix[i] = (char*)malloc(num_cols * sizeof(char));
        memset(matrix[i], '*', num_cols);
    }
    int i = 0, j = 0;
    for (int k = 0; k < str_len; k++) {
        matrix[i][j] = string[k];
        if (i == num_rows - 1) {
            i = 0;
            j++;
        } else {
            i++;
        }
    }
    char* decoded = (char*)malloc((str_len + 1) * sizeof(char));
    int index = 0;
    for (int col = 0; col < num_cols; col++) {
        for (int row = 0; row < num_rows; row++) {
            if (matrix[row][col] != '*') {
                decoded[index++] = matrix[row][col];
            }
        }
    }
    decoded[index] = '\0';
    for (int i = 0; i < num_rows; i++) {
        free(matrix[i]);
    }
    free(matrix);
    return decoded;
}

int main() {
    char* string = "MY NAME IS";
    int num_rows = 3;
    char* decoded = slanted_transposition_decode(string, num_rows);
    printf("%s\n", decoded);  
    free(decoded);

    string = "CODINGMART TECHNOLOGIES";
    num_rows = 4;
    decoded = slanted_transposition_decode(string, num_rows);
    printf("%s\n", decoded);  
    free(decoded);

    return 0;
}

