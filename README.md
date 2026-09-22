# DSA-UIT

Repository dùng để học và luyện **Data Structures & Algorithms (DSA)** bằng **C++**.

Mục tiêu của repo này không phải chỉ lưu đáp án, mà là ghi lại quá trình học: tự làm bài, sửa lỗi, hiểu thuật toán, phân tích độ phức tạp và theo dõi tiến độ.

## Learning Roadmap

- [ ] 01. Array
- [ ] 02. String
- [ ] 03. Sorting
- [ ] 04. Binary Search
- [ ] 05. Two Pointers
- [ ] 06. Sliding Window
- [ ] 07. Prefix Sum
- [ ] 08. Linked List
- [ ] 09. Stack
- [ ] 10. Queue
- [ ] 11. Recursion
- [ ] 12. Hashing
- [ ] 13. Tree
- [ ] 14. Heap / Priority Queue
- [ ] 15. Graph
- [ ] 16. Greedy
- [ ] 17. Backtracking
- [ ] 18. Dynamic Programming

## Current Focus

### Array

Đang ôn lại các kiến thức cơ bản:

- khai báo mảng
- nhập / xuất mảng
- duyệt mảng
- tính tổng
- tìm min / max
- đếm phần tử theo điều kiện
- linear search
- đảo mảng
- kiểm tra thứ tự của mảng

## How to follow the roadmap

Học lần lượt từ `01-Array` đến `18-Dynamic-Programming`. Trong mỗi topic, chọn một bài trong `README.md`, tự viết file `.cpp`, compile/test rồi gửi mình review khi hoàn thành.

Các thư mục đã có đề bài nhưng chưa đánh dấu hoàn thành. Chỉ cập nhật tiến độ sau khi bài đã được tự làm và kiểm tra.

Hiện tại đang bắt đầu với `Giai-Doan-1/Mang`, gồm 10 bài ôn tập mảng cơ bản.

## Repository Structure

```text
DSA-UIT/
├── AGENTS.md
├── README.md
├── .gitignore
├── 01-Array/
├── 02-String/
├── 03-Sorting/
├── 04-Binary-Search/
├── 05-Two-Pointers/
├── 06-Sliding-Window/
├── 07-Prefix-Sum/
├── 08-Linked-List/
├── 09-Stack/
├── 10-Queue/
├── 11-Recursion/
├── 12-Hashing/
├── 13-Tree/
├── 14-Heap/
├── 15-Graph/
├── 16-Greedy/
├── 17-Backtracking/
└── 18-Dynamic-Programming/
```

> Cấu trúc có thể được bổ sung dần khi học; không cần tạo toàn bộ thư mục ngay từ đầu.

## How I Learn

Với mỗi bài tập:

1. Đọc và hiểu đề.
2. Tự nghĩ cách giải trước.
3. Tự viết code.
4. Compile và test.
5. Sửa lỗi và ghi lại điều đã học.
6. Phân tích Time Complexity và Space Complexity.
7. Commit và push bài đã hoàn thành lên GitHub.

## Compile C++

Ví dụ với `g++`:

```bash
g++ -std=c++17 -Wall -Wextra -pedantic bai.cpp -o bai
```

Chạy trên Windows:

```powershell
.\bai.exe
```

## Progress Log

Codex sẽ cập nhật phần này khi một bài được hoàn thành và kiểm tra thành công.

<!-- DSA_PROGRESS_START -->
- **Topic organization:** Các bài đã biên dịch được phân loại vào `01-Array`, `08-Linked-List` và `12-Hashing`.
- **Array - input and output:** Nhập `n`, lưu phần tử vào mảng và duyệt mảng để xuất kết quả. Dùng `O(n)` thời gian và `O(1)` bộ nhớ phụ.
- **Array - sum:** Duyệt mảng và cộng dồn các phần tử. Dùng `O(n)` thời gian và `O(1)` bộ nhớ phụ.
- **Array - min and max:** Khởi tạo min/max từ phần tử đầu tiên rồi cập nhật trong một lần duyệt. Dùng `O(n)` thời gian và `O(1)` bộ nhớ phụ.
- **Array - count even and odd:** Duyệt mảng một lần và đếm theo tính chẵn lẻ. Dùng `O(n)` thời gian và `O(1)` bộ nhớ phụ.
- **Array - linear search:** Duyệt từ đầu và dừng tại vị trí đầu tiên có giá trị cần tìm. Dùng `O(n)` thời gian và `O(1)` bộ nhớ phụ.
<!-- DSA_PROGRESS_END -->

## Commit Convention

```text
DSA: <topic> - <exercise name>
```

Ví dụ:

```text
DSA: Array - find maximum element
DSA: Linked List - reverse linked list
```

---

## Author

GitHub: [tuhamho](https://github.com/tuhamho)
