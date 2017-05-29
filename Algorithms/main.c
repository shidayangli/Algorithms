//
//  main.c
//  Algorithms
//
//  Created by 杨立 on 2017/5/29.
//  Copyright © 2017年 yangli. All rights reserved.
//

#include "StringHandle/ReverseStringHandle.c"

int main(int argc, const char * argv[]) {
    char s[] = "dfhsdkn";
    LeftRotateString(s, 7, 3);
    printf("%s\n", s);
    return 0;
}
