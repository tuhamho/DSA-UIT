# Linked List

Các bài tập tạo node, nối node, duyệt và đảo linked list.

### Basic traversal (`linkedlist.cpp`, `linkedlista1.cpp`)

- **Concept:** Node, con trỏ `next` và duyệt danh sách.
- **Approach:** Đi từ `head` đến khi gặp `nullptr`.
- **Time:** O(n)
- **Space:** O(1) khi duyệt.

### Insert and count (`lambai1.cpp`)

- **Concept:** Thêm node cuối danh sách và đếm phần tử theo điều kiện.
- **Approach:** Duyệt đến node cuối rồi nối node mới.
- **Time:** O(n) cho mỗi lần thêm cuối.
- **Space:** O(n) cho các node.

### Delete head (`linkedlist4.cpp`)

- **Concept:** Xóa node đầu và giải phóng bộ nhớ.
- **Approach:** Lưu node cũ, cập nhật `head`, sau đó `delete` node cũ.
- **Time:** O(1)
- **Space:** O(1)

### Reverse linked list (`reverseLinkedlist.cpp`)

- **Concept:** Đảo hướng liên kết bằng ba con trỏ.
- **Approach:** Dùng `prev`, `current` và `next` để đảo từng liên kết.
- **Time:** O(n)
- **Space:** O(1)
