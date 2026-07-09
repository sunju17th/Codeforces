#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    map<string, int> sobaigiai; 
    map<string, bool> dagiai; 
    int time, tongbaigiai = 0, tongTime = 0;
    string bai, Ketqua;

    while (true) {
        cin >> time;
        if (time == -1) break; 
        cin >> bai >> Ketqua;

        if (Ketqua == "right") {
            if (!dagiai[bai]) {
                dagiai[bai] = true;
                tongbaigiai++;
                tongTime += time + sobaigiai[bai];
            }
        } else if (Ketqua == "wrong") {
            sobaigiai[bai] += 20;
        }
    }

    cout << tongbaigiai << " " << tongTime << endl;
    return 0;
}
