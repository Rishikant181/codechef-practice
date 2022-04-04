#include <iostream>
#include <vector>

/**
 * Prints if the group of friends can register for the course together
 * @param friends The vector containing the number of friends in each test case
 * @param cap The vector containing the max capacity of the course in each test case
 * @param others The vector containing the total number of other people in each test case
 * @param numTests The total number of test cases
 * */
void canRegister(std::vector<int> friends, std::vector<int> cap, std::vector<int> others, int numTests) {
    // Iterating over all test cases
    for(int i = 0; i < numTests; i++) {
        // If available places more than the number of friends
        if((cap[i] - others[i]) >= friends[i]) {
            std::cout << "Yes" << std::endl;
        }
        // If no places available
        else {
            std::cout << "No" << std::endl;
        }
    }
}

int main() {
    int numTest = 0;                                                // To store the total number of test casess
    std::vector<int> friendCount;                                   // To store the number of friends in each test case
    std::vector<int> maxCap;                                        // To store the maximum capacity in each test case
    std::vector<int> otherCount;                                    // To store number of other people in each test case

    // Inputting the number of test cases
    std::cin >> numTest;

    // Inputting data for each test case
    for(int i = 0; i < numTest; i++) {
        // Temp storage
        int friends;
        int cap;
        int others;

        std::cin >> friends;
        std::cin >> cap;
        std::cin >> others;

        friendCount.push_back(friends);
        maxCap.push_back(cap);
        otherCount.push_back(others);
    }

    // Output
    canRegister(friendCount, maxCap, otherCount, numTest);
}