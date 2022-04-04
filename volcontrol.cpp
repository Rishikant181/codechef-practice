#include <iostream>
#include <cmath>
#include <vector>

void btnPressCount(std::vector<int> ivol, std::vector<int> fvol, int numTests) {
    for(int i = 0; i < numTests; i++) {
        std::cout << abs(ivol[i] - fvol[i]) << std::endl;
    }
}

int main() {
    int numTest = 0;                                        // To store the number of test cases
    std::vector<int> initVol;                               // To store initial volumes
    std::vector<int> finalVol;                              // To store final volumes

    // Taking number of test cases
    std::cin >> numTest;

    // Inputting data for each test case
    for(int i = 0; i < numTest; i++) {
        // To store the initial and final volumes for each test case temporarily
        int ivol;
        int fvol;

        // Taking initial and final volume as input
        std::cin >> ivol;
        std::cin >> fvol;

        // Storing initial and final volumes
        initVol.push_back(ivol);
        finalVol.push_back(fvol);
    }

    btnPressCount(initVol, finalVol, numTest);

    return 0;
}