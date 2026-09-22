# Giai đoạn 1 - Ôn tập mảng

Làm các bài theo thứ tự từ trên xuống dưới. Mỗi file `.cpp` đã có đề bài trong phần comment; hãy tự hoàn thành hàm `main`.

## Danh sách bài

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

## Bài đã hoàn thành

### 01. Nhập và xuất mảng

- **Khái niệm:** Nhập, lưu và duyệt các phần tử trong mảng.
- **Cách làm:** Dùng một vòng lặp để nhập và một vòng lặp để xuất.
- **Thời gian:** O(n)
- **Bộ nhớ phụ:** O(1)

### 02. Tính tổng phần tử

- **Khái niệm:** Duyệt mảng và cộng dồn các phần tử.
- **Cách làm:** Khởi tạo tổng bằng `0`, sau đó cộng lần lượt từng giá trị.
- **Thời gian:** O(n)
- **Bộ nhớ phụ:** O(1)

### 03. Tìm phần tử nhỏ nhất và lớn nhất

- **Khái niệm:** Duyệt mảng và duy trì giá trị nhỏ nhất, lớn nhất hiện tại.
- **Cách làm:** Khởi tạo min và max bằng phần tử đầu tiên rồi cập nhật khi duyệt.
- **Thời gian:** O(n)
- **Bộ nhớ phụ:** O(1)
- **Bài học:** Không khởi tạo min/max bằng `0` vì sẽ sai với mảng toàn số dương hoặc toàn số âm.

### 04. Đếm số chẵn và số lẻ

- **Khái niệm:** Kiểm tra tính chẵn lẻ của từng phần tử.
- **Cách làm:** Duyệt mảng một lần và tăng bộ đếm tương ứng.
- **Thời gian:** O(n)
- **Bộ nhớ phụ:** O(1)

### 05. Tìm kiếm tuyến tính

- **Khái niệm:** Tìm vị trí xuất hiện đầu tiên của một giá trị.
- **Cách làm:** Duyệt từ đầu mảng và dừng ngay khi tìm thấy.
- **Thời gian:** O(n)
- **Bộ nhớ phụ:** O(1)
- **Bài học:** Cần đọc dữ liệu theo đúng thứ tự được mô tả trong đề bài.

Mục tiêu: nắm chắc cách duyệt mảng, xử lý trường hợp biên và phân tích `O(n)` thời gian.
