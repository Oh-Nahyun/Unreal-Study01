//
//  Study03(논리, 비트연산).cpp
//  CProject
//
//  Created by 오나현 on 11/19/24.
//

/*
/// [2024.11.19]

#include <stdio.h>

/// 논리 연산자 (&&(And), ||(Or))
int main()
{
    int num = 0;
    scanf("%d", &num); // 5를 넣는다.
    printf("num 가 3보다 크고, 10보다 작습니까? : %d\n", 3 < num && num < 10);
    printf("num 가 3보다 크거나, 10보다 작습니까? : %d\n", 3 < num || num < 10);
    
    return 0;
}

/// 복합 대입 연산자
int main()
{
    int a = 7;
    a += 7;     // a = a + 7;
    // 덧셈, 뺄셈, 곱셈, 나눗셈, 나머지 계산도 모두 적용 가능
    printf("%d\n", a);
    
    return 0;
}

/// 비트 연산 (&(AND), |(OR), ^(XOR), ~(NOT), 쉬프트(<<, >>))
int main()
{
    unsigned char a = 4;        // [4] 0000 0100 // [6] 0000 0110
    unsigned char b = 8;        // [8] 0000 1000 // [13] 0000 1101
    unsigned char c = a & b;    // [0] 0000 0000 // [4] 0000 0100
    printf("4와 8의 AND 연산값 : %d\n", c);
    
    a = 6;      // 0000 0110
    b = 13;     // 0000 1101
    c = a | b;  // 0000 1111
    printf("6와 13의 OR 연산값 : %d\n", c); // [15]
    
    a = 6;      // 0000 0110
    b = 13;     // 0000 1101
    c = a ^ b;  // 0000 1011
    printf("6와 13의 XOR 연산값 : %d\n", c); // [11]
    
    a = 4;      // 0000 0100
    c = ~a;     // 1111 1011
    printf("4의 NOT 연산값 : %d\n", c); // [251]
    
    return 0;
}
 */
