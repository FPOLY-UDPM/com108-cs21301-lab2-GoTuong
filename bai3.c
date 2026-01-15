/******************************************************************************
 * Họ và tên: [Lê Minh Tường]
 * MSSV :      [PS37909]
 * Lớp:       [CS21301]
 *****************************************************************************/

// BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HÌNH TRÒN
// Input: Nhập vào bán kính của đường tròn
// Output: Hiển thị ra màn hình chu vi và diện tích của hình tròn

#include <stdio.h>

int main()
{
    // Khai báo biến
    float banKinh, bi = 3.14, chuVi, dienTich;

    // Nhập dữ liệu
    printf("Nhap ban kinh: ");
    scanf("%f", &banKinh);

    // Xử lý, tính toán
    chuVi = 2 * bi * banKinh;
    dienTich = bi * banKinh * banKinh;

    // Hiển thị kết quả
    printf("Chu vi hinh tron la: %.2f\n", chuVi);
    printf("Dien tich hinh tron la: %.2f", dienTich);
}