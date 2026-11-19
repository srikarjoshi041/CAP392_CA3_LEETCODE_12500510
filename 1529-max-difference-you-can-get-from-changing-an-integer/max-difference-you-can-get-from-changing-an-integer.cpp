
class Solution {
public:
    int maxDiff(int num) {
        string s = to_string(num);

        // Find maximum number
        string maxNum = s;
        for (char &c : maxNum) {
            if (c != '9') {
                char target = c;
                for (char &d : maxNum) {
                    if (d == target) d = '9';
                }
                break;
            }
        }

        // Find minimum number
        string minNum = s;

        if (minNum[0] != '1') {
            char target = minNum[0];
            for (char &c : minNum) {
                if (c == target) c = '1';
            }
        } else {
            for (int i = 1; i < minNum.size(); i++) {
                if (minNum[i] != '0' && minNum[i] != '1') {
                    char target = minNum[i];
                    for (char &c : minNum) {
                        if (c == target) c = '0';
                    }
                    break;
                }
            }
        }

        return stoi(maxNum) - stoi(minNum);
    }
};
