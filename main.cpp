#include<bits/stdc++.h>
using namespace std;
string BMI(double weight, double height){
    if(weight <= 0 || weight > 800 ||
       height <= 0 || height > 3)
        return "Input không hợp lệ";
    double bmi = weight / (height * height);
    if(bmi < 18.5)
        return "Thiếu cân";
    if(18.5 <= bmi && bmi <= 24.9)
        return "Cân đối";
    if(25.0 <= bmi && bmi <= 29.9)
        return "Thừa cân";
    return "Béo phì";
}
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;
    double weight, height;
    while(n--){
        cin >> weight >> height;
        cout << BMI(weight, height) << endl;
    }
}
