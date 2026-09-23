# Array

## Giai đoạn 1 - Bài tập ôn mảng

Làm theo thứ tự từ trên xuống dưới. Mỗi file có đề bài trong comment.

1. `01-input-output.cpp` - Nhập và xuất mảng
2. `02-sum.cpp` - Tính tổng phần tử
3. `03-min-max.cpp` - Tìm min và max
4. `04-count-condition.cpp` - Đếm phần tử theo điều kiện
5. `05-linear-search.cpp` - Tìm kiếm tuyến tính
6. `06-reverse.cpp` - Đảo ngược mảng
7. `07-check-sorted.cpp` - Kiểm tra mảng tăng dần
8. `08-second-largest.cpp` - Tìm phần tử lớn thứ hai
9. `09-remove-element.cpp` - Xóa phần tử tại vị trí
10. `10-frequency.cpp` - Đếm tần suất phần tử

Mục tiêu: nắm chắc cách duyệt mảng, xử lý trường hợp biên và phân tích độ phức tạp.

Các bài tập nhập, duyệt và xử lý mảng cơ bản.

### Input and output (`mang1.cpp`)

- **Concept:** Nhập và xuất các phần tử trong mảng.
- **Approach:** Lưu dữ liệu vào mảng rồi duyệt từ đầu đến cuối.
- **Time:** O(n)
- **Space:** O(1) bộ nhớ phụ.

### Reverse array (`mang2.cpp`)

- **Concept:** Duyệt mảng theo chiều ngược lại.
- **Approach:** Bắt đầu từ chỉ số `n - 1` và giảm dần.
- **Time:** O(n)
- **Space:** O(1) bộ nhớ phụ.

### Find maximum (`mang3.cpp`)

- **Concept:** Tìm phần tử lớn nhất bằng cách duyệt mảng.
- **Approach:** Giữ lại giá trị lớn nhất hiện tại.
- **Time:** O(n)
- **Space:** O(1) bộ nhớ phụ.
- **Lesson:** Khởi tạo max bằng phần tử đầu tiên để xử lý đúng cả mảng toàn số âm.

### Linear search (`duyetmang.cpp`)

- **Concept:** Tìm giá trị trong mảng bằng duyệt tuyến tính.
- **Approach:** So sánh từng phần tử với giá trị cần tìm.
- **Time:** O(n)
- **Space:** O(1)
