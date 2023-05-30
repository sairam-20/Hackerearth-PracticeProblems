#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int array[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    int start = 1;
    int k = 2;
    while (start <= n) {
        start += k;
        k += 1;
    }

    start -= k - 1;
    k -= 2;
    long long initialSum = 0;
    for (int i = 0; i < start; i++) {
        initialSum += array[i];
    }
    long long max_special_sum = initialSum;

    for (int i = 1; i < n; i++) {
        initialSum -= array[i - 1];
        if (start < n) {
            initialSum += array[start];
            start += 1;
        } else {
            k -= 1;
            for (int j = n - k; j < n; j++) {
                initialSum -= array[j];
            }
            start -= k;
        }
        if (initialSum > max_special_sum) {
            max_special_sum = initialSum;
        }
    }

    printf("%lld\n", max_special_sum);

    return 0;
}
