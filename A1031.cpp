
 
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
 
 
int main(int argc, const char * argv[]) {
    char str[90];
    scanf("%s", str);
    int len = strlen(str);
    int n = (len + 2) / 3 ;
    int m = len + 2 - 2 * n;
    for(int i = 0; i < n - 1; i++) {
        printf("%c", str[i]);
        for(int j = 1; j < m - 1; j++) {
            printf(" ");
        }
        printf("%c\n", str[len - 1 - i]);
    }
    for(int i = 0; i < m; i++) {
        printf("%c", str[n - 1 + i]);
    }
    return 0;
}
