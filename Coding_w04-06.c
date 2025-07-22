#include <stdio.h>

const int GLOBAL_RATE = 10;                   // ประกาศตัวแปรคงที่แบบ global ที่ใช้ได้ทั่วทั้งโปรแกรม
void calculate() {                            // ฟังก์ชัน calculate ใช้แสดงค่าของ GLOBAL_RATE และ LOCAL_BONUS
const int LOCAL_BONUS = 50;                    // ตัวแปรคงที่แบบ local ใช้ได้เฉพาะในฟังก์ชันนี้

printf ("GLOBAL_RATE = %d\n", GLOBAL_RATE);   // แสดงค่า GLOBAL_RATE ซึ่งเป็นตัวแปร global
printf("LOCAL_BONUS = %d\n", LOCAL_BONUS);    // แสดงค่า LOCAL_BONUS ซึ่งเป็นตัวแปร local ของฟังก์ชัน
}
int main () {
calculate() ;
printf ("GLOBAL_RATE = %d\n", GLOBAL_RATE);    // แสดงค่า GLOBAL_RATE อีกครั้งใน main

return 0;
}
