#include <stdio.h>
int main(int argc, char *argv[]) {
    int t;
    scanf("%d", &t);

    while( t-- ) {
        int n, m = 0;
        scanf("%d", &n);
        while(n) {
            int t = n % 10;
            m = m * 10 + t;
            n = n / 10;
        }
        printf("%d\n", m);
    }
    return 0;
}