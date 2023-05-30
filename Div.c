#include <stdio.h>
#include <math.h>

int count_divisors_without_overflow(int X) {
    int count = 0;
    int sqrt_X = (int)sqrt(X);

    for (int D = 1; D <= sqrt_X; D++) {
        int quotient = X / D;
        int quotient_bits = 0;
        int divisor_bits = 0;

        while (quotient != 0) {
            quotient_bits++;
            quotient >>= 1;
        }

        int temp = D;
        while (temp != 0) {
            divisor_bits++;
            temp >>= 1;
        }
        
        if (quotient_bits <= divisor_bits) {
            count++;
        }
        
        if (D != quotient) {
            quotient_bits = 0;
            temp = quotient;
            while (temp != 0) {
                quotient_bits++;
                temp >>= 1;
            }
            
            if (quotient_bits <= divisor_bits) {
                count++;
            }
        }
    }
    
    return count;
}

int main() {
    int T;
    scanf("%d", &T);
    
    int testcases[T];
    for (int i = 0; i < T; i++) {
        scanf("%d", &testcases[i]);
    }
    for (int i = 0; i < T; i++) {
        int result = count_divisors_without_overflow(testcases[i]);
        printf("%d\n", result);
    }
    
    return 0;
}
