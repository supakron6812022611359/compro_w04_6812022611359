#include <stdio.h>

int main() {
    char name = 's';          //ตัวแรกของชื่อ"S"
    int ag = 18;              //อายุ "18"
    float wei = 100.50;       //นํ้าหนัก   
    char gen[] = "Male";      //เพศ

    printf("nameInitial: %c\n", name);
    printf("age: %u\n", ag);
    printf("weight: %f\n", wei); 
    printf("gender: %s\n", gen);

    return 0;
}
