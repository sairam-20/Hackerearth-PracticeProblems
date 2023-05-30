#include <stdio.h>

int main() {
    int D, O, Of, Od, Ca, Cy, Cm, Ct;
    scanf("%d", &D);
    scanf("%d %d %d", &O, &Of, &Od);
    scanf("%d %d %d %d", &Ca, &Cy, &Cm, &Ct);

    int online_cost = O + ((D - Of) > 0 ? (D - Of) * Od : 0);
    int classic_cost = Ca + (D * Cm) + ((D / Cy) * Ct);

    if (online_cost <= classic_cost) {
        printf("Online Taxi\n");
    } else {
        printf("Classic Taxi\n");
    }

    return 0;
}
