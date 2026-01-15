/******************************************************************************
 * Họ và tên: [Lê Minh Tường]
 * MSSV :      [PS37909]
 * Lớp:       [CS21301]
 *****************************************************************************/

// BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HCN
// Input: Nhập vào từ bàn phím chiều dài và chiều rộng
// Output: Hiển thị ra màn hình chu vi và diện tích của hình chữ nhật

#include <stdio.h>

int main()
{
    // Khai báo biến
    float chieuDai, chieuRong, chuVi, dienTich;
    // Nhập dữ liệu
    printf("Nhap chieu dai: ");
    scanf("%f", &chieuDai);

    printf("Nhap chieu rong: ");
    scanf("%f", &chieuRong);
    while (chieuRong >= chieuDai)
    {
        printf("Chieu rong phai be hon chieu dai\n");
        printf("Nhap chieu rong: ");
        scanf("%f", &chieuRong);
    }

    // Xử lý, tính toán
    chuVi = (chieuRong + chieuDai) * 2;
    dienTich = chieuDai * chieuRong;
    // Hiển thị kết quả
    printf("Chu vi hcn la: %.2f\n", chuVi);
    printf("Dien tich hcn la: %.2f", dienTich);
}