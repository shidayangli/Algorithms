//
//  main.c
//  Algorithms
//
//  Created by yangli on 2017/5/24.
//  Copyright © 2017年 yangli. All rights reserved.
//
// 桶排序
#include <stdio.h>

int bucketSort(int argc, const char * argv[]) {
    int a[11], i, j, k;
    for (i = 0; i <= 10; i++) {
        a[i] = 0;
    }
    for (i = 1; i <= 5; i++) {
        scanf("%d", &k);
        a[k]++;
    }
    for (i = 0; i <= 10; i++)
        for (j = 1; j <= a[i]; j++)
            printf("%d", i);
    printf("\n");
    return 0;
}
