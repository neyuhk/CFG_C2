#include<bits/stdc++.h>
using namespace std;
string check_sum(double maths, double literature, double english){
    if(maths < 0 || maths > 10)
        return "Input không hợp lệ.";

    if(literature < 0 || literature > 10)
        return "Input không hợp lệ.";

    if(english < 0 || english > 10)
        return "Input không hợp lệ.";

    if(maths <= 1 || literature <= 1 || english <= 1)
        return "Không đỗ trường Đại Học Công Nghệ.";

    double sum = maths + literature + english;

    if(sum >= 27.5)
        return "Đỗ trường Đại Học Công Nghệ.";
    else
        return "Không đỗ trường Đại Học Công Nghệ.";
}
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;
    double maths, literature, english;
    while(n--){
        cin >> maths >> literature >> english;
        cout << check_sum(maths, literature, english) << endl;
    }
}
