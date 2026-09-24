# String

## File bài tập

1. `01-length.cpp` - Đếm độ dài chuỗi
2. `02-count-vowels.cpp` - Đếm nguyên âm
3. `03-count-character-types.cpp` - Đếm chữ hoa, chữ thường và chữ số
4. `04-reverse.cpp` - Đảo ngược chuỗi
5. `05-palindrome.cpp` - Kiểm tra palindrome
6. `06-count-words.cpp` - Đếm số từ
7. `07-remove-spaces.cpp` - Xóa khoảng trắng
8. `08-most-frequent-character.cpp` - Tìm ký tự xuất hiện nhiều nhất
9. `09-capitalize-words.cpp` - Viết hoa chữ cái đầu mỗi từ
10. `10-anagram.cpp` - Kiểm tra anagram

### Bài tập

1. Nhập một chuỗi và đếm số ký tự.
2. Đếm nguyên âm, phụ âm và chữ số.
3. Đảo ngược chuỗi.
4. Kiểm tra chuỗi palindrome.
5. Tìm ký tự xuất hiện nhiều nhất.

## Bài đã hoàn thành

### 01. Đếm độ dài chuỗi

- **Khái niệm:** Dùng `string::size()` để lấy số ký tự.
- **Thời gian:** O(1)
- **Bộ nhớ phụ:** O(1)

### 02. Đếm nguyên âm

- **Khái niệm:** Duyệt từng ký tự và kiểm tra nguyên âm.
- **Thời gian:** O(n)
- **Bộ nhớ phụ:** O(1)

### 03. Đếm loại ký tự

- **Khái niệm:** Dùng `isupper`, `islower` và `isdigit`.
- **Thời gian:** O(n)
- **Bộ nhớ phụ:** O(1)

### 04. Đảo ngược chuỗi

- **Khái niệm:** Đổi chỗ ký tự bằng hai con trỏ và biến tạm.
- **Thời gian:** O(n)
- **Bộ nhớ phụ:** O(1)

### 05. Kiểm tra chuỗi palindrome

- **Khái niệm:** So sánh chuỗi ban đầu với chuỗi đã đảo ngược.
- **Cách làm:** Tạo bản sao, đảo bản sao bằng hai con trỏ rồi so sánh.
- **Thời gian:** O(n)
- **Bộ nhớ phụ:** O(n)
- **Bài học:** Cần xử lý chuỗi rỗng trước khi tính `size() - 1` với `size_t`.

### 06. Đếm số từ

- **Khái niệm:** Nhận diện thời điểm bắt đầu một từ mới.
- **Cách làm:** Dùng biến `inword` để phân biệt ký tự đầu từ với các ký tự tiếp theo.
- **Thời gian:** O(n)
- **Bộ nhớ phụ:** O(1)
- **Bài học:** Không thể chỉ đếm khoảng trắng vì có thể có nhiều khoảng trắng liên tiếp hoặc ở đầu/cuối câu.

Mục tiêu: làm quen với `string`, duyệt ký tự và xử lý khoảng trắng.
