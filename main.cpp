// Yêu cầu:
// Chuyển chuỗi string thành mảng array (mảng có kiểu string)

#include <iostream>
#include <string>
#define SIZE 20
using namespace std;

// hàm chuyển chuỗi string thành mảng
void Ham_Chuyen_ChuoiString_Thanh_Mang(string str, string arr[SIZE]){
    int index = 0;
    string data = "";

    // đếm số lượng cái ký tự '$'
    int dem = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if(str[i] == '$'){
            dem = dem + 1;
        }
    }
    
    int n = 0;
    n = dem + 1;

    for (int i = 0; i < n; i++)
    {
        for (; index < str.length();)
        {
            // nếu gặp ký tự "$" thì thu
            // được 1 phần tử cho mảng
            if (str[index] == '$')
            {
                arr[i] = data;
                index = index + 1;

                // xóa data
                data = "";

                break;
            }

            // nếu đọc đến ký tự cuối cùng của chuỗi
            // thì thêm phần tử cho mảng
            // xong rồi break
            if (index == str.length() - 1)
            {
                data = data + str[index];
                arr[i] = data;
                break;
            } 

            data = data + str[index];
            index = index + 1;
        }
    }    
}

int main(){
    // fake nhập vào 1 chuỗi
    string str = "1$Nguyen Ngoc Linh$2004";

    // tạo mảng
    string arr[SIZE];

    // gọi hàm chuyển chuỗi string thành mảng
    Ham_Chuyen_ChuoiString_Thanh_Mang(str, arr);

    // hiển thị mảng
    // đếm số lượng cái ký tự '$'
    int dem = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if(str[i] == '$'){
            dem = dem + 1;
        }
    }
    
    int n = 0;
    n = dem + 1;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\n";
    }
    cout << "\n";

    return 0;
}