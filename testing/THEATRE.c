#include <stdio.h>
#include <stdbool.h>

void main(void) {
    int t, n, emptyShows, i, j, k, time, show, totalCost, cost, max, l, tIndex, sIndex;
    char m;
    bool isEmpty;

    scanf("%d", &t);
    printf("t is %d\n", t);
    totalCost = 0;

    for(i = 0; i < t; i++) {
        scanf("%d", &n);
        printf("n is %d\n", n);

        emptyShows = 4;
        cost = 0;
        max = 0;
        tIndex = 0;
        sIndex = 0;
        isEmpty = true;
        int arr[4][4];
        
        for(j = 0; j < 4; j ++) {
            for(k = 0; k < 4; k ++) {
                arr[j][k] = 0;
            }
        }

        for(j = 0; j < n; j++) {
            scanf("%c %d", &m, &time);

            time = (time / 3) % 4;
            show = m - 65;

            printf("time is %d\n", time);
            printf("show is %d\n", show);

            arr[show][time] ++;
        }

        for(j = 0; j < 4; j++) {
            for(k = 0; k < 4; k++) {
                for(l = 0; l < 4; l++) {
                    if(arr[k][l] > max) {
                        max = arr[k][l];
                        tIndex = l;
                        sIndex = k;
                        isEmpty = false;
                    }
                }
            }
            if(isEmpty == false) {
                cost += (max * 25 * emptyShows);
                emptyShows --;
                isEmpty = true;
                max = 0;
                for(k = 0; k < 4; k++) {
                    arr[sIndex][k] = 0;
                }
                for(k = 0; k < 4; k++) {
                    arr[k][tIndex] = 0;
                }
            }
            else {
                break;
            }
        }
        cost -= (emptyShows * 100);
        totalCost += cost;

        printf("%d\n", cost);
    }
    printf("%d\n", totalCost);
}