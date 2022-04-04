#include <iostream>
#include <cmath>
#include <vector>

/**
 * Prints the minimum number of button presses required to change the volume
 * @param ivol The vector containing the initial volumes of all test cases
 * @param fvol The vector containing the final volumes of all test cases
 * @param numTests The total number of test cases
 * */
void btnPressCount(std::vector<int> ivol, std::vector<int> fvol, int numTests) {
    // Itearing over each initial and fincal volume
    for(int i = 0; i < numTests; i++) {
        /**
         * The absolute difference betweet the initial and final volume is equal to the number of button presses required,
         * since each button press increase the volume by one
         * */
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
        int ivol;
        int fvol;

        std::cin >> ivol;
        std::cin >> fvol;

        initVol.push_back(ivol);
        finalVol.push_back(fvol);
    }

    // Printing the number of button presses required
    btnPressCount(initVol, finalVol, numTest);

    return 0;
}