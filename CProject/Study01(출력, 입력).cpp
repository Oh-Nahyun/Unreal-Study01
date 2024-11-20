//
//  study01.cpp
//  CProject
//
//  Created by 오나현 on 11/15/24.
//

/// [2024.11.15]

/*
#include <stdio.h>

int main()
{
    int i;
    int sum = 0;
    
    for (i = 1; i <= 10; i = i + 1)
    {
        sum = sum + i;
    }
    
    printf("%d", sum);
    
    return 0;
}
*/

/*
#include <stdio.h> // 헤더파일

//void main()
int main()
{
    printf("\tHello World\n");
    printf("Hello \tWorld\n");
    printf("Hello World\tHello World\n");
    
    printf("\n");
    printf("\n");
    
    printf("*\n");
    printf("**\n");
    printf("***\n");
    printf("****\n");
    printf("*****\n");
    
    /// 자료형 & 변수
    /// 메모리에 데이터 저장
    // 정수
    int level = 22222222; // 1 ~ 600000 > 4바이트
    unsigned int level2 = 4200000000; // 0 ~ 약 42억 > 4바이트
    
    /// --------------------------------------------------

    /// [2024.11.18]
    // (Me) 오버플로우 : 계산을 하다가 범위를 넘어가는 현상
    int HP = 100;
    int Attack = 45;
    int Def = 75;
    
    // 실수
    float a = 1.3f;
    double b = 1.645232f;
 
    return 0;
}
 */

/*
 #include <stdio.h>

 int main()
 {
    /// 계산기 & 자판기
    // 정수
    int a;
    int b;
    
    a = 50;
    b = 100;
    
    // 형식 지정자 (%d)
    printf("A의 값은 %d 입니다.\n", a);
    printf("B의 값은 %d 입니다.\n", b);
    printf("A의 값은 %d, B의 값은 %d 입니다.\n", a, b);
    
    // 실수
    float af = 1.3f;
    double bf = 1.645232f;
     
    // 형식 지정자 (%f)
    printf("A의 값은 %f 입니다.\n", af);
    printf("B의 값은 %f 입니다.\n", bf);
    printf("A의 값은 %f, B의 값은 %f 입니다.\n", af, bf);
     
    /// 사칙연산
    // 덧셈
    int c;
    c = a + b;
    //int c = a + b;
    printf("A + B의 값은 %d 입니다.\n", a + b);
    printf("A + B의 값은 %d 입니다.\n", c);
     
    return 0;
}

/// 입력 받기
#include <stdio.h>

// [1] 에러 해결 방안
// [1-1] 전처리기 속성에 "_CRT_SECURE_NO_WARNINGS" 추가
//#define _CRT_SECURE_NO_WARNINGS // [1-2] 전처리기 직접 추가

int main()
{
    int input = 0;
    printf("\n\n input : ");
    scanf("%d", &input);        // 입력 받는 함수, 포인터 사용
    // [1-3] scanf_s("%d", &input); 사용
    printf("input 데이터는 %d 입니다.\n", input);
    
    // 여러개 처리
    int input2;
    printf("\n\n input1 input2 : ");
    scanf("%d, %d", &input, &input2); //////////////////////////////////////////////////////////////////
    printf("input 데이터는 %d 입니다.\n input2 데이터는 %d 입니다.\n",
           input, input2);
    
    return 0;
}

#include <stdio.h>

int main()
{
    /// 상수 (const) : 변하지 않는 수 처리할 때, 사용
    const double PI = 3.1415;
    printf("PI = %f", PI);
    
    return 0;
}
 */
