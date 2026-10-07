# Vector

Thực hành `vector` trong C++ theo thứ tự từ cơ bản đến một số thao tác thường dùng.
Mỗi file có đề bài và ví dụ; hãy tự hoàn thiện chương trình.

1. `01-input-output.cpp` - Nhập và in các phần tử
2. `02-sum.cpp` - Duyệt vector và tính tổng
3. `03-push-back.cpp` - Thêm phần tử vào cuối vector
4. `04-insert.cpp` - Chèn phần tử vào vị trí cho trước
5. `05-erase.cpp` - Xóa phần tử tại vị trí cho trước
6. `06-find-max.cpp` - Tìm giá trị lớn nhất
7. `07-count-value.cpp` - Đếm số lần xuất hiện của một giá trị
8. `08-reverse.cpp` - Đảo ngược vector
9. `09-remove-value.cpp` - Xóa mọi phần tử bằng giá trị cho trước

Gợi ý: `vector` có thể tự thay đổi kích thước khi thêm hoặc xóa phần tử.

## Bài đã hoàn thành

### 01. Nhập và in vector

- **Khái niệm:** Lưu số lượng phần tử linh hoạt bằng `vector`.
- **Cách làm:** Đọc từng số, thêm vào cuối bằng `push_back`, rồi duyệt để in.
- **Thời gian:** O(n)
- **Bộ nhớ phụ:** O(n)

### 02. Tính tổng phần tử

- **Khái niệm:** Duyệt vector và cộng dồn các phần tử.
- **Cách làm:** Lưu dữ liệu trong vector, cộng từng giá trị vào biến tổng kiểu `long long`.
- **Thời gian:** O(n)
- **Bộ nhớ phụ:** O(n)
- **Bài học:** Dùng kiểu tổng đủ lớn để tránh tràn số.

### 03. Thêm phần tử vào cuối vector

- **Khái niệm:** Kích thước vector có thể tăng khi chương trình chạy.
- **Cách làm:** Dùng `push_back` để thêm số mới, sau đó in `size()` và các phần tử.
- **Thời gian:** O(n) cho toàn bộ thao tác nhập và in; mỗi lần thêm cuối trung bình O(1).
- **Bộ nhớ phụ:** O(n)

### 06. Tìm phần tử lớn nhất

- **Khái niệm:** Duyệt vector và giữ lại giá trị lớn nhất đã gặp.
- **Cách làm:** Khởi tạo giá trị lớn nhất bằng phần tử đầu, rồi so sánh với các phần tử còn lại.
- **Thời gian:** O(n)
- **Bộ nhớ phụ:** O(n) để lưu vector.
- **Bài học:** Không khởi tạo giá trị lớn nhất bằng `0` nếu dữ liệu có thể toàn số âm.
