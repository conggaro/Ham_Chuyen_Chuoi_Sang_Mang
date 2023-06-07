// chuyển chuỗi thành mảng
// thuật toán này do trí tuệ nhân tạo (AI) gợi ý

#include <iostream>
#include <string>
#include <sstream>
#define SIZE 20

using namespace std;

// hàm chuyển chuỗi string thành mảng
void Ham_Chuyen_ChuoiString_Thanh_Mang(string str, string arr[SIZE], int n){
    istringstream iss(str); // khởi tạo istringstream từ chuỗi str
    string data;

    for (int i = 0; i < n; i++) {
        getline(iss, data, '$'); // đọc phần tử từ chuỗi istringstream được tách bởi ký tự '$'
        arr[i] = data; // gán phần tử vừa đọc vào mảng
    }
}

int main(){
    // fake nhập vào 1 chuỗi
    string str = "1$Nguyen Van A$20";

    // fake nhập vào n
    int n = 3;

    // tạo mảng
    string arr[SIZE];

    // gọi hàm chuyển chuỗi string thành mảng
    Ham_Chuyen_ChuoiString_Thanh_Mang(str, arr, n);

    // hiển thị mảng
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\n";
    }
    cout << "\n";

    return 0;
}
