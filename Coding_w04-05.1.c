#include <stdio.h>

void countCall() {
    static int counter = 0;                                      // ประกาศตัวแปร static ทำให้ค่าของตัวแปรนี้คงอยู่ระหว่างการเรียกฟังก์ชัน
    counter++;                                                   // เพิ่มค่าตัวแปร counter ทีละ 1 ทุกครั้งที่เรียกฟังก์ชัน
    printf("Call function: counter = %d\n", counter);            // แสดงค่าของ counter
}

int main() {
    printf("Starting function calls...\n");                       
    countCall();                                                  // เรียกฟังก์ชัน countCall() ครั้งที่ 1
    printf("After first call:\n");
    countCall();                                                  // เรียกฟังก์ชัน countCall() ครั้งที่ 2
    return 0;
}
