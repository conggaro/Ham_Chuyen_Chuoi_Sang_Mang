Điểm đáng chú ý trong thuật toán
1. Dùng 2 vòng lặp for
2. Sử dụng câu lệnh if để bắt được ký tự phân tách, ví dụ là dấu đô la '$', ví dụ là dấu phẩy ','
3. Vì bản chất thuật toán là đọc ký tự phân tách để chuyển chuỗi thành mảng, nhưng ở ký tự cuối cùng thì sẽ không có dấu '$' cũng không có dấu ','

=> Nên đọc đến ký tự cuối cùng thì chúng ta phải if(str[index] == str.length() - 1) để thêm chuỗi string cuối cùng vào mảng.
