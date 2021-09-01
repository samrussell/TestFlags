// TestFlags.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

extern "C" unsigned long __fastcall addflags(unsigned long ecx, unsigned long edx);
extern "C" unsigned long __fastcall subflags(unsigned long ecx, unsigned long edx);
extern "C" unsigned long __fastcall cmpflags(unsigned long ecx, unsigned long edx);
extern "C" unsigned long __fastcall testflags(unsigned long ecx, unsigned long edx);

void addFlags(unsigned long first, unsigned long second) {
    std::cout << "ADD " << std::hex << first << ", " << std::hex << second << ": " << std::hex << addflags(first, second) << std::endl;
}

void subFlags(unsigned long first, unsigned long second) {
    std::cout << "SUB " << std::hex << first << ", " << std::hex << second << ": " << std::hex << subflags(first, second) << std::endl;
}

void cmpFlags(unsigned long first, unsigned long second) {
    std::cout << "CMP " << std::hex << first << ", " << std::hex << second << ": " << std::hex << cmpflags(first, second) << std::endl;
}

void testFlags(unsigned long first, unsigned long second) {
    std::cout << "TEST " << std::hex << first << ", " << std::hex << second << ": " << std::hex << testflags(first, second) << std::endl;
}

int main()
{
    addFlags(0, 0);
    addFlags(1, 0);
    addFlags(1, 1);
    addFlags(1, 0xFFFFFFFF);
    addFlags(1, 0x0F);
    addFlags(0x10, 0xFFFFFFF0);
    addFlags(1, 0xFFFFFFF0);
    addFlags(0x0F, 0xFFFFFFF0);
    addFlags(0xFFFFFFF0, 0xFFFFFFF0);
    addFlags(0xFFFFFFFF, 0x80000000);
    addFlags(0xFFFFFFFE, 0x80000000);
    addFlags(1, 0x7FFFFFFF);
    addFlags(2, 0x7FFFFFFF);

    subFlags(0, 0);
    subFlags(1, 0);
    subFlags(1, 1);
    subFlags(0, 1);
    subFlags(0x10, 1);
    subFlags(0, 0x10);
    subFlags(0xFFFFFFFF, 0x0F);
    subFlags(0x80000000, 1);
    subFlags(0x80000002, 1);
    subFlags(0x7FFFFFFF, 0xFFFFFFF0);
    subFlags(0x7FFFFF00, 0xFFFFFFF0);

    cmpFlags(0, 0);
    cmpFlags(1, 0);
    cmpFlags(1, 1);
    cmpFlags(0, 1);
    cmpFlags(0x10, 1);
    cmpFlags(0, 0x10);
    cmpFlags(0xFFFFFFFF, 0x0F);
    cmpFlags(0x80000000, 1);
    cmpFlags(0x80000002, 1);
    cmpFlags(0x7FFFFFFF, 0xFFFFFFF0);
    cmpFlags(0x7FFFFF00, 0xFFFFFFF0);

    testFlags(0, 0);
    testFlags(1, 0);
    testFlags(1, 1);
    testFlags(0, 1);
    testFlags(0xFFFFFFFF, 0xFFFFFFFF);
    testFlags(0xFFFFFFFF, 0);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
