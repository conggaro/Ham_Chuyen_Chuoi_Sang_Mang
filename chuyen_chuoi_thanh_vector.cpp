// Tác giả: Nguyễn Chí Công

// Yêu cầu:
// chuyển chuỗi thành vector

// code ở đây sẽ được tôi viết cao cấp hơn
// vì tôi cho thêm cái đọc ký tự vào hàm
// tức là hàm có thể đọc được '$' hoặc dấu phẩy ',' tùy thích

#include <iostream>
#include <string>
#include <vector>
using namespace std;

// hàm chuyển chuỗi string thành vector
void Ham_Chuyen_ChuoiString_Thanh_Vector(string str, vector<string> &v, char kyTu){
    // việc 1:
    // viết code để chuẩn bị đồ, công cụ trước khi làm việc
    // cần chuẩn bị index và data
    int index = 0;
    string data = "";

    // việc 2:
    // đếm ký tự
    int dem = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if(str[i] == kyTu){
            dem = dem + 1;
        }
    }
    int n = dem + 1;
    
    // việc 3:
    // chuyển chuỗi string thành vector thôi
    for (int i = 0; i < n; i++)
    {
        for (; index < str.length();)
        {
            if (str[index] == kyTu)
            {
                v.push_back(data);
                index = index + 1;
                
                // xóa data
                data = "";

                break;
            }
            
            if (index == str.length() - 1)
            {
                data = data + str[index];
                v.push_back(data);
                break;
            }

            data = data + str[index];
            index = index + 1;
        }
    }
}

int main(){
    // fake nhập vào 1 chuỗi
    string data_str = "1,Nguyen Ngoc Linh,2004";

    // tạo vector
    vector<string> data_v;

    // gọi hàm chuyển chuỗi string thành vector
    // vì các thông tin cần lấy cách nhau bởi dấu phẩy
    // nên phải truyền thêm ký tự
    Ham_Chuyen_ChuoiString_Thanh_Vector(data_str, data_v, ',');

    // in ra màn hình
    for (int i = 0; i < data_v.size(); i++)
    {
        cout << data_v[i] << "\n";
    }    

    return 0;
}