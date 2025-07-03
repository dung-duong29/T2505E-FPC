#include <stdio.h>

int isPrime(int n) {
    if (n <= 1) return 0;
    
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }

    return 1;
}

int main() {
    int number;

    printf("nhap mot so nguyen duong: ");
    scanf("%d", &number);

    if (number <= 0) {
        printf("nhap mot so nguyen duong lon hon 0.\n");
        return 1;
    }

    if (isPrime(number)) {
        printf("%d la so nguyen to.\n", number);
    } else {
        printf("%d khong phai la so nguyen to.\n", number);
    }

}

