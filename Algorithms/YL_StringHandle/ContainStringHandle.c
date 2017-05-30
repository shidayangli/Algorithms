//
//  ContainStringHandle.c
//  Algorithms
//
//  Created by 杨立 on 2017/5/29.
//  Copyright © 2017年 yangli. All rights reserved.
//
//给定两个分别由字母组成的字符串A和字符串B，字符串B的长度比字符串A短。请问，如何最快地判断字符串B中所有字母是否都在字符串A里？

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// 一、遍历对比
bool containString1(char a[], char b[]) {
    int j;
    for (int i = 0; i < strlen(b); i++) {
        for (j = 0; (j < strlen(a)) && (a[j] != b[i]); j++);
        if (j >= strlen(a)) {
            return false;
        }
    }
    return true;
}

// 二、位运算

/*
 * 事实上，可以先把长字符串a中的所有字符都放入一个Hashtable里，然后轮询短字符串b，看短字符串b的每个字符是否都在Hashtable里，如果都存在，说明长字符串a包含短字符串b，否则，说明不包含。
 *
 * 再进一步，我们可以对字符串A，用位运算（26bit整数表示)计算出一个“签名”，再用B中的字符到A里面进行查找。
 *
 */

bool containString2(char a[], char b[]) {
    int hash = 0;
    for (int i = 0; i < strlen(a); i++) {
        hash |= (1 << (a[i] - 'A'));
    }
    for (int i = 0; i < strlen(b); i++) {
        if ((hash & (1 << (b[i] - 'A'))) == 0) {
            return false;
        }
    }
    return true;
}
