/******************************************************************************
 * Họ và tên: [Lê Minh Tường]
 * MSSV :      [PS37909]
 * Lớp:       [CS21301]
 *****************************************************************************/

// BÀI 4: XÂY DỰNG CHƯƠNG TRÌNH TÍNH ĐIỂM TRUNG BÌNH
// Input: Nhập vào từ bàn phím điểm môn Toán, Lý, Hóa
// Output: Hiển thị ra màn hình điểm trung bình
// Biết rằng
// Điểm Toán có hệ số 3, điểm Lý có hệ số 2, điểm Hóa có hệ số 1

#include <stdio.h>

int main()
{
    // Khai báo biến
    float diemToan, diemLy, diemHoa, diemTB;

    // Nhập dữ liệu
    printf("Nhap diem toan: ");
    scanf("%f", &diemToan);

    printf("Nhap diem hoa: ");
    scanf("%f", &diemHoa);

    printf("Nhap diem ly: ");
    scanf("%f", &diemLy);

    // Xử lý, tính toán
    diemTB = (diemToan * 3 + diemLy * 2 + diemHoa) / 6;

    // Hiển thị kết quả
    printf("Diem trung binh cua ban la: %.2f", diemTB);
}