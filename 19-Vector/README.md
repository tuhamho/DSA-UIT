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

### 04. Chèn phần tử vào vị trí

- **Khái niệm:** Iterator xác định vị trí thao tác trong vector.
- **Cách làm:** Dùng `insert` tại `begin() + p` để chèn giá trị.
- **Thời gian:** O(n) do các phần tử phía sau có thể phải dịch chuyển.
- **Bộ nhớ phụ:** O(n) để lưu vector.

### 05. Xóa phần tử tại vị trí

- **Khái niệm:** Xóa phần tử theo chỉ số trong vector.
- **Cách làm:** Dùng `erase` tại `begin() + p`, rồi in kích thước và các phần tử còn lại.
- **Thời gian:** O(n) do các phần tử phía sau có thể phải dịch chuyển.
- **Bộ nhớ phụ:** O(n) để lưu vector.

### 06. Tìm phần tử lớn nhất

- **Khái niệm:** Duyệt vector và giữ lại giá trị lớn nhất đã gặp.
- **Cách làm:** Khởi tạo giá trị lớn nhất bằng phần tử đầu, rồi so sánh với các phần tử còn lại.
- **Thời gian:** O(n)
- **Bộ nhớ phụ:** O(n) để lưu vector.
- **Bài học:** Không khởi tạo giá trị lớn nhất bằng `0` nếu dữ liệu có thể toàn số âm.

### 07. Đếm số lần xuất hiện

- **Khái niệm:** Duyệt vector và đếm các phần tử thỏa điều kiện.
- **Cách làm:** So sánh từng phần tử với `x`, tăng biến đếm khi bằng nhau.
- **Thời gian:** O(n)
- **Bộ nhớ phụ:** O(n) để lưu vector.

### 08. Đảo ngược vector

- **Khái niệm:** Đổi chỗ các phần tử đối xứng qua hai đầu vector.
- **Cách làm:** Dùng hai chỉ số từ đầu và cuối, đổi chỗ rồi tiến vào giữa.
- **Thời gian:** O(n)
- **Bộ nhớ phụ:** O(1)

### 09. Xóa mọi phần tử có giá trị x

- **Khái niệm:** Lọc vector bằng cách giữ lại các phần tử khác `x`.
- **Cách làm:** Duyệt vector một lượt, chép phần tử cần giữ sang vector phụ.
- **Thời gian:** O(n)
- **Bộ nhớ phụ:** O(n) cho vector phụ.
