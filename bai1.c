/******************************************************************************
 * Họ và tên: [Lê Minh Tường]
 * MSSV :      [PS37909]
 * Lớp:       [CS21301]
 *****************************************************************************/

// BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH CỘNG / TRỪ 2 SỐ
// Input: Nhập vào từ bàn phím 2 số
// Output: Hiển thị ra màn hình tổng, hiệu 2 số

#include <stdio.h>

int main()
{
    // Khai báo biến
    float a, b, tong, hieu;

    // Nhập dữ liệu
    printf("Nhap a: ");
    scanf("%f", &a);

    printf("Nhap b: ");
    scanf("%f", &b);

    // Xử lý, tính toán
    tong = a + b;
    hieu = a - b;

    // Hiển thị kết quả
    printf("Tong %.2f va %.2f la %.2f\n", a, b, tong);
    printf("Hieu %.2f va %.2f la %.2f", a, b, hieu);
}