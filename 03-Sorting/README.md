# Sorting

Làm lần lượt các bài tập dưới đây. Mỗi file có đề bài và ví dụ; hãy tự hoàn thiện chương trình.

1. `01-bubble-ascending.cpp` - Bubble Sort tăng dần
2. `02-bubble-descending.cpp` - Bubble Sort giảm dần
3. `03-selection-sort.cpp` - Selection Sort tăng dần
4. `04-insertion-sort.cpp` - Insertion Sort tăng dần
5. `05-bubble-optimized.cpp` - Dừng sớm nếu mảng đã có thứ tự
6. `06-count-comparisons-swaps.cpp` - Đếm số lần so sánh và đổi chỗ của Bubble Sort

Mục tiêu: hiểu các thuật toán sắp xếp cơ bản, cách chúng di chuyển phần tử và độ phức tạp `O(n²)`.

## Bài đã hoàn thành

### 01. Bubble Sort tăng dần

- **Khái niệm:** So sánh các phần tử liền kề và đổi chỗ khi sai thứ tự.
- **Cách làm:** Lặp tối đa `n - 1` lượt để đưa các phần tử lớn dần về cuối mảng.
- **Thời gian:** O(n²)
- **Bộ nhớ phụ:** O(1)

### 03. Selection Sort tăng dần

- **Khái niệm:** Mỗi lượt chọn phần tử nhỏ nhất trong đoạn chưa sắp xếp.
- **Cách làm:** Tìm vị trí nhỏ nhất từ `i` đến cuối mảng, rồi đổi chỗ với `a[i]`.
- **Thời gian:** O(n²)
- **Bộ nhớ phụ:** O(1)
- **Bài học:** Lưu vị trí nhỏ nhất khi tìm; chỉ đổi chỗ sau khi tìm xong mỗi lượt.

### 04. Insertion Sort tăng dần

- **Khái niệm:** Duy trì đoạn đầu đã sắp xếp và chèn từng phần tử vào đúng vị trí.
- **Cách làm:** Giữ `key`, dịch các phần tử lớn hơn sang phải rồi đặt `key` vào chỗ trống.
- **Thời gian:** O(n²) trung bình và tệ nhất; O(n) khi mảng đã tăng dần.
- **Bộ nhớ phụ:** O(1)
- **Bài học:** Lưu giá trị cần chèn trước khi dịch các phần tử để không làm mất nó.
