#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    for (int j = n-1; j >= 0; j--) {
        std::cout << arr[j] << " ";
    }
    return 0;
}
