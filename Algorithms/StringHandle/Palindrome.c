//
//  Palindrome.c
//  Algorithms
//
//  Created by 杨立 on 2017/5/31.
//  Copyright © 2017年 yangli. All rights reserved.
//
// 判断一个字串是否是回文？

#include <stdio.h>
#include <stdbool.h>

// 一、从两头向中间扫描

bool isPalindrome1(const char *s, int n) {
    if (s == NULL || n < 1) {
        return false;
    }
    
    const char *front, *back;
    front = s;
    back = s + n - 1;
    
    while (front < back) {
        if (*front != *back) {
            return false;
        }
        front++;
        back--;
    }
    return true;
}


// 二、从中间向两头扫描

bool isPalindrome2(const char *s, int n) {
    if (s == NULL || n < 1) {
        return false;
    }
    const char* first, *second;
    
    // m定位到字符串的中间位置
    int m = ((n >> 1) - 1) >= 0 ? (n >> 1) - 1 : 0;
    first = s + m;
    second = s + n - 1 - m;
    
    while (first >= s) {
        if (*first!= *second) {
            return false;
        }
        --first;
        ++second;
    }
    return true;
}
