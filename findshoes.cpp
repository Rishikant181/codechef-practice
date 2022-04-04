#include <iostream>
#include <vector>

/**
 * Prints the total number of more shoes to be bought
 * @param friends The vector containing the number of friends of each test case
 * @param leftShoes The vector containing the number of left shoes already with chef
 * @param numTest The total number of test cases
 * */
void newShoeCount(std::vector<int> friends, std::vector<int> leftShoes, int numTest) {
    // Itearing over each test case
    for(int i = 0; i < numTest; i++) {
        int shoes = 0;                                                  // To store total number of shoes to be bought
        
        // If more friends than left shoes
        if(friends[i] > leftShoes[i]) {
            shoes = (friends[i] * 2) - leftShoes[i];
        }
        // If more left shoes than friends
        else {
            shoes = friends[i];
        }

        // Printing the total number of shoes to be bought
        std::cout << shoes << std::endl;
    }
}

int main() {
    int numTests = 0;                                           // To store the number of test cases
    std::vector<int> friendCount;                               // To store the number of friends in each test case
    std::vector<int> leftShoeCount;                             // To store the number of left shoes in each test case

    // Taking the number of test cases as input
    std::cin >> numTests;

    // Inputting data for each test case
    for(int i = 0; i < numTests; i++) {
        int friends;
        int leftShoes;

        std::cin >> friends;
        std::cin >> leftShoes;

        friendCount.push_back(friends);
        leftShoeCount.push_back(leftShoes);
    }

    // Output
    newShoeCount(friendCount, leftShoeCount, numTests);
}