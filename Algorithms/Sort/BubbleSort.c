//
//  BubbleSort.c
//  Algorithms
//
//  Created by yangli on 2017/5/25.
//  Copyright © 2017年 yangli. All rights reserved.
//
// 冒泡排序
#include <stdio.h>

int bubbleSort(int argc, const char * argv[]) {
    int a[100], i, j,  n, t;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    }
    for (i = 1; i <= n-1; i++) {
        for (j = 1; j <= n-i; j++) {
            if (a[j] < a[j+1]) {
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }
    for (i = 1; i <= n; i++) {
        printf("%d", a[i]);
    }
    return 0;
}
