/******************************************************************************
 * Họ và tên: [Lê Minh Tường]
 * MSSV :      [PS37909]
 * Lớp:       [CS21301]
 *****************************************************************************/

// BÀI LÀM THÊM
// BÀI 5: XÂY DỰNG CHƯƠNG TRÌNH TÍNH TÍCH VÀ THƯƠNG CỦA 2 SỐ

#include <stdio.h>

int main()
{
    float so1, so2, tich, thuong;

    printf("Chương trình tính tích và thương của 2 số\n");

    printf("Nhap so thu nhat: ");
    scanf("%f", &so1);

    printf("Nhap so thu 2: ");
    scanf("%f", &so2);
    while (so2 == 0)
    {
        printf("So bi chia phai khac 0\n");
        printf("Nhap so thu 2: ");
        scanf("%f", &so2);
    }

    tich = so1 * so2;

    thuong = so1 / so2;

    printf("Tich cua %.2f va %.2f la: %.2f\n", so1, so2, tich);
    printf("Thuong cua %.2f va %.2f la: %.2f", so1, so2, thuong);

    return 0;
}