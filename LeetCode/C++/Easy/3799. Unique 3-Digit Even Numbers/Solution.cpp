#include <vector>
#include <string>
#include <unordered_map>

class Solution {
public:
    int totalNumbers(std::vector<int>& digits) {
        std::vector<int> count(10, 0);
        for (int d : digits) {
            count[d]++;
        }

        int uniqueEvenCount = 0;

        
        for (int num = 100; num <= 998; num += 2) {
            int d1 = num / 100;
            int d2 = (num / 10) % 10;
            int d3 = num % 10;

            std::vector<int> tempCount(10, 0);
            tempCount[d1]++;
            tempCount[d2]++;
            tempCount[d3]++;

            bool possible = true;
            for (int i = 0; i <= 9; ++i) {
                if (tempCount[i] > count[i]) {
                    possible = false;
                    break;
                }
            }

            if (possible) {
                uniqueEvenCount++;
            }
        }

        return uniqueEvenCount;
    }
};