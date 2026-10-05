#include <stdio.h>

int main(void) {
    int i, n, m = 0, minimal = 0, maksimal = 0, total = 0;
    float rerata = 0;

    printf("input jumlah data (n): ");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++) {
        while(i <= n) {
            printf("input nilai ke-%d: ", i);
            scanf("%d", &m);

            if (i == 1) {
                minimal = m;
                maksimal = m;
            }

            if(m < minimal) minimal = m;
            if(m > maksimal) maksimal = m; 
            
            total = total + m;
            i++;
        }
    }

    rerata = (float) total / n;

    printf("Nilai minimal = %d\n", minimal);
    printf("Nilai maksimal = %d\n", maksimal);
    printf("Nilai rata rata = %.2f\n", rerata);

    return 0;
}