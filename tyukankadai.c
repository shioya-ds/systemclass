#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100]; 

    printf("パスワードを入力してください: ");
    scanf("%99s", str); 

    
    int length = strlen(str); 
    int hasUpper = 0;         
    int hasLower = 0;         

    for (int i = 0; i < length; i++) {
        if (isupper(str[i])) {
            hasUpper = 1;
        }
        if (islower(str[i])) {
            hasLower = 1;
        }
    }

    if (length >= 8 && hasUpper && hasLower) {
        printf("文字列 \"%s\" は強いパスワードです。\n", str);
    } else {
        printf("文字列 \"%s\" は強いパスワードではありません。\n", str);
        printf("改善点:\n");
        if (length < 8) {
            printf("- パスワードを8文字以上にしてください。\n");
        }
        if (!hasUpper) {
            printf("- アルファベットの大文字を含めてください。\n");
        }
        if (!hasLower) {
            printf("- アルファベットの小文字を含めてください。\n");
        }
    }

    return 0;
}
