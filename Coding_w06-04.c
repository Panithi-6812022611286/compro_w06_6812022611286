#include <stdio.h>

int main() {
    float x = 10.0, a = 2.0, y = 3.0, z = 1.0;
    float price = 20.0, quantity = 2.0, discount = 5.0, rate = 10.0;
    float total = 100.0, score = 80.0, penalty = 2.0, mistake = 3.0;// กำหนดค่าตัวแปร

    // แบบเต็ม
    printf("แบบเต็ม\n");

    float x1 = x - 4.0;
    printf("%.1f\n", x1);

    float x2 = 6.5 * x;
    printf("%.1f\n", x2);

    int   x3 = (int)x % (int)(y + z * a); // ใช้ int เพราะ % ใช้กับ int เท่านั้น
    printf("%d\n", x3);

    float x4 = x / (2.0 * x);
    printf("%.1f\n", x4);

    float t1 = total + (price * quantity - discount);
    printf("%.1f\n", t1);

    float x5 = x * (1 + rate / 100);
    printf("%.1f\n", x5);

    float s1 = score - (penalty * (mistake + 1));
    printf("%.1f\n", s1);
    // แสดงผล



    // แบบย่อ 
    printf("\nแบบย่อ\n");

    x -= 4.0;           
    printf("%.1f\n", x);

    x = 10.0; // ต้องรีเซ็ตค่า x ทุกครั้งเพื่อไม่ให้ค่าตัวแปร x ทับซ้อนกัน
    x *= 6.5; 
    printf("%.1f\n", x);

    x = 10.0;
    int x7 = (int)x; // ใช้ int เพราะ % ใช้กับ int เท่านั้น
    x7 %= (int)(y + z * a);
    printf("%d\n", x7);

    x = 10.0; 
    x /= (2.0 * x); 
    printf("%.1f\n", x);

    total = 100.0; 
    total += (price * quantity - discount);
    printf("%.1f\n", total);

    x = 10.0; 
    x *= (1 + rate / 100);
    printf("%.1f\n", x);

    score = 80.0; 
    score -= (penalty * (mistake + 1));
    printf("%.1f\n", score);
    // แสดงผล

    return 0;
}
