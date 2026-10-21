# Binary Search

Học lần lượt từ bài 1. Các file `.cpp` chỉ có đề và khung chương trình để tự luyện.

## Lý thuyết

Binary Search (tìm kiếm nhị phân) tìm một giá trị trong một phạm vi đã có tính chất **đơn điệu**. Trường hợp cơ bản nhất là tìm trong mảng đã được sắp xếp. Mỗi lượt loại bỏ khoảng một nửa số phần tử có thể chứa đáp án.

Ví dụ tìm `7` trong mảng tăng dần:

```text
Chỉ số:  0  1  2  3  4  5  6
Mảng:    1  3  5  7  9 11 13
```

1. Xét đoạn chỉ số `0..6`; giữa là `3`, giá trị `7`. Đã tìm thấy.

Ví dụ tìm `8` trong cùng mảng:

1. Giữa đoạn `0..6` là chỉ số `3`, giá trị `7`. Vì `8 > 7`, bỏ nửa trái và tìm ở `4..6`.
2. Giữa đoạn `4..6` là chỉ số `5`, giá trị `11`. Vì `8 < 11`, tìm ở `4..4`.
3. Xét giá trị `9`. Vì `8 < 9`, đoạn tìm kiếm rỗng; không tìm thấy.

### Cách duy trì đoạn tìm kiếm

- `left` và `right` là hai đầu của đoạn **còn có thể chứa đáp án**.
- Tính giữa an toàn bằng `mid = left + (right - left) / 2`.
- Nếu `a[mid]` bằng giá trị cần tìm thì đã thấy.
- Trong mảng tăng dần, nếu `a[mid]` nhỏ hơn giá trị cần tìm thì bỏ nửa trái bằng `left = mid + 1`; nếu lớn hơn thì bỏ nửa phải bằng `right = mid - 1`.
- Dùng vòng lặp `while (left <= right)`. Khi `left > right`, không còn vị trí nào để kiểm tra.

### Điều kiện áp dụng và độ phức tạp

- Với tìm kiếm cơ bản, mảng phải được sắp xếp tăng hoặc giảm và không bị thay đổi thứ tự trong lúc tìm.
- Mỗi lượt giảm đoạn tìm kiếm còn khoảng một nửa: thời gian `O(log n)`.
- Nếu cần lưu sẵn mảng đầu vào thì bộ nhớ là `O(n)`; riêng phần tìm kiếm chỉ dùng `O(1)` bộ nhớ phụ.
- Binary Search không thể áp dụng trực tiếp lên mảng chưa sắp xếp. Hãy cân nhắc chi phí sắp xếp trước khi dùng.

### Các lỗi thường gặp

- Quên cập nhật `left` hoặc `right`, khiến vòng lặp không kết thúc.
- Dùng `left = mid` hoặc `right = mid` mà không bảo đảm đoạn sẽ ngắn đi.
- Dùng `mid = (left + right) / 2`; cách này có thể tràn số với chỉ số rất lớn.
- Nhầm chỉ số với giá trị phần tử; chỉ số mảng thường bắt đầu từ `0`.
- Mảng có phần tử trùng thì phải xác định rõ cần tìm lần xuất hiện đầu, cuối hay bất kỳ lần nào.

## Bài tập

1. [`01-basic-search.cpp`](01-basic-search.cpp) — Tìm một giá trị trong mảng tăng dần, in chỉ số hoặc `-1`.
2. [`02-first-occurrence.cpp`](02-first-occurrence.cpp) — Tìm chỉ số xuất hiện đầu tiên của giá trị trong mảng có thể trùng.
3. [`03-last-occurrence.cpp`](03-last-occurrence.cpp) — Tìm chỉ số xuất hiện cuối cùng.
4. [`04-search-insert-position.cpp`](04-search-insert-position.cpp) — Tìm vị trí đầu tiên có giá trị lớn hơn hoặc bằng giá trị cần tìm.
5. [`05-rotated-array-search.cpp`](05-rotated-array-search.cpp) — Tìm trong mảng tăng dần bị xoay vòng, các phần tử phân biệt.

Mục tiêu: hiểu điều kiện để loại bỏ một nửa đoạn tìm kiếm và tự xác định biên trái/phải trong từng biến thể.
