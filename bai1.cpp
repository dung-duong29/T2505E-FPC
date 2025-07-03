#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Nhap so n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("Tong tu 1 den %d la: %d\n", n, sum);
    return 0;
}
