# DSA-UIT

Repository dùng để học và luyện **Data Structures & Algorithms (DSA)** bằng **C++**.

Mục tiêu của repo này không phải chỉ lưu đáp án, mà là ghi lại quá trình học: tự làm bài, sửa lỗi, hiểu thuật toán, phân tích độ phức tạp và theo dõi tiến độ.

## Lộ trình và tiến độ

Các ô dưới đây đánh dấu khi hoàn thành toàn bộ topic; tiến độ bài tập hiện tại được ghi riêng bên dưới.

- [ ] 01. Array — đang học giai đoạn 1
- [ ] 02. String — đang học
- [ ] 03. Sorting
- [ ] 04. Binary Search
- [ ] 05. Two Pointers
- [ ] 06. Sliding Window
- [ ] 07. Prefix Sum
- [ ] 08. Linked List — đã có một số bài thực hành
- [ ] 09. Stack
- [ ] 10. Queue
- [ ] 11. Recursion
- [ ] 12. Hashing — đã có bài thực hành
- [ ] 13. Tree
- [ ] 14. Heap / Priority Queue
- [ ] 15. Graph
- [ ] 16. Greedy
- [ ] 17. Backtracking
- [ ] 18. Dynamic Programming

### Đang làm

- **Array:** Hoàn thành bài 1–9 trong [01-Array](01-Array/README.md). Bài 10 đang được luyện lại với `unordered_map`.
- **String:** Hoàn thành bài 1–8 trong [02-String](02-String/README.md); còn bài 9–10.

Học theo thứ tự bài trong README của từng topic. Tự viết lời giải, thử các trường hợp biên, rồi nhờ review khi hoàn thành.

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

## Quy trình học

Với mỗi bài tập:

1. Đọc và hiểu đề.
2. Tự nghĩ cách giải trước.
3. Tự viết code.
4. Compile và test.
5. Sửa lỗi và ghi lại điều đã học.
6. Phân tích Time Complexity và Space Complexity.
7. Ghi nhận bài đã hoàn thành rồi commit và push.

## Compile C++

Ví dụ với `g++`:

```bash
g++ -std=c++17 -Wall -Wextra -pedantic 02-String/01-length.cpp -o bai
```

Chạy trên Windows:

```powershell
.\bai.exe
```

## Progress Log

Tóm tắt các bài đã được hoàn thành và kiểm tra. Chi tiết cách làm nằm trong README của từng topic.

<!-- DSA_PROGRESS_START -->
- **Array (bài 1–9):** Nhập/xuất, tổng, min/max, đếm, tìm kiếm, đảo mảng, kiểm tra thứ tự, tìm số lớn thứ hai và xóa phần tử.
- **String (bài 1–8):** Độ dài, nguyên âm, loại ký tự, đảo chuỗi, palindrome, đếm từ, xóa khoảng trắng và tìm ký tự phổ biến nhất.
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
