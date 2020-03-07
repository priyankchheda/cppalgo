#include <iostream>

int main()
{
    int arr[6][6];
    for (int i = 0; i < 6; i++)
        for (int j = 0; j < 6; j++)
            std::cin >> arr[i][j];

    int sum = 0, maxSum = -100;
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= 4; j++) {
            sum = 0;
            sum += arr[i-1][j-1];
            sum += arr[i-1][j];
            sum += arr[i-1][j+1];
            sum += arr[i][j];
            sum += arr[i+1][j-1];
            sum += arr[i+1][j];
            sum += arr[i+1][j+1];
            if (maxSum < sum) maxSum = sum;
        }
    }
    std::cout << maxSum << std::endl;


    return 0;
}
