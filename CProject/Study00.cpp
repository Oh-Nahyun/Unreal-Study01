//
//  main.cpp
//  CProject
//
//  Created by 오나현 on 11/14/24.
//

/*
 #include <stdio.h>
 
 int main()
 {
     return 0;
 }
 */

/*
#include <iostream>

int main(int argc, const char * argv[])
{
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
 */

/// [2024.11.14]

/// 윈도우 단축키
// ctrl + F7 : 컴파일
// ctrl + F5 : 디버그 & 실행파일 생성 & 실행
// F5 : 디버깅
// F9 : 디버깅 위치 설정
// F10 또는 F11 : 디버깅 스탭

/// Mac 단축키
/// 01. Buil & Run - 빌드 & 실행
// ⌘(command) + B : 프로젝트 빌드
// ⌘(command) + ⇧(Shift) + B : 정적 분석
// ⌘(command) + R : 프로젝트 실행
// ⌘(command) + I : 프로젝트 프로파일링 빌드
// ⌘(command) + U : 프로젝트 테스트 실행

/// 02. Debugging - 디버깅
// ⌘(command) + ⌥(option) + ₩ : 다음 이슈
// ⌘(command) + " : 이전 이슈
// ⌘(command) + ^(Control) + ⌥(option) + ₩ : 다음 이슈 고치기
// ⌘(command) + ^(Control) + " : 이전 이슈 고치기
// ⌘(command) + \ : 중단점 (break point) 추가하기
// ⌘(command) + Y : 모든 중단점 활성화하기
// F7 : 다음 중단점으로 이동하기

/// --------------------------------------------------

/// [2024.11.15]

/// 윈도우 단축키
// 주석처리 : // or /* */
// 블록 영역 선택 : alt(option) + 드래그

/// Visual Studio 프로젝트 설정
// [1] 프로젝트(P) > 속성(P) > c/c++ > 전처리기 > 전처리기 정의 : ; 구분자 뒤에 [_CRT_SECURE_NO_WARNINGS] 삽입
// [2] 프로젝트(P) > 속성(P) > c/c++ > 일반 > SDL 검사 : [아니오]로 변경
// [3] 프로젝트(P) > 속성(P) > 링커 > 시스템 > 하위시스템 : [콘솔](안사라지게) 선택
// [4] 프로젝트(P) > 속성(P) > c/c++ > 언어 > 준수모드 : [아니오]로 변경
