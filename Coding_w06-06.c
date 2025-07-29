#include <stdio.h>

int main() {
    int a = 5, b = 2;
    float x = 3.0, y = 4.5;

    // Expression 1
    int r1 = a++ * b + (int)y % 3;
    // a++ = 5 (ใช้ก่อนเพิ่ม), b = 2, (int)y = 4 → 5*2 + 4%3 = 10 + 1 = 11
    // หลังบรรทัดนี้ a = 6

    // Expression 2
    int r2 = (a > b) && ((int)x / b < 2);
    // a = 6 > 2 → 1, x = 3.0, (int)x = 3, 3 / 2 = 1 < 2 → 1 → 1 && 1 = 1

    // Expression 3
    float r3 = ++x * y - a / 2;
    // ++x → 4.0, y = 4.5 → 4.0 * 4.5 = 18.0, a = 6 → 6 / 2 = 3 → 18.0 - 3 = 15.0

    // Expression 4
    float r4 = ((x += 1.5) > y) || (b-- > 0);
    // x = 5.5 > 4.5 → 1 → ไม่เช็คขวา ⇒ ผลเป็น 1.0
    // หลังบรรทัดนี้ b = 1

    // พิมพ์ผลลัพธ์
    printf("r1 = %d\n", r1);    // 11
    printf("r2 = %d\n", r2);    // 1
    printf("r3 = %.2f\n", r3);  // 15.00
    printf("r4 = %.2f\n", r4);  // 1.00

    // พิมพ์ค่าตัวแปรหลังนิพจน์
    printf("\nAfter expressions:\n");
    printf("a = %d\n", a);  // 6
    printf("b = %d\n", b);  // 1
    printf("x = %.2f\n", x); // 5.5
    printf("y = %.2f\n", y); // 4.5

    return 0;
}
