#include <iostream>
#include <vector>

int main()
{
    std::vector<std::vector<int>> arr;

    int lastAnswer = 0;
    int n, queries;
    std::cin >> n >> queries;

    for (int i = 0; i < n; i++)
    {
        std::vector<int> v;
        arr.push_back(v);
    }

    int condition, x, y, seq;
    for (int i = 0; i < queries; i++)
    {
        std::cin >> condition >> x >> y;
        seq = (x ^ lastAnswer) % n;
        switch (condition)
        {
        case 1:
            arr[seq].push_back(y);
            break;
        case 2:
            lastAnswer = arr[seq][y % arr[seq].size()];
            std::cout << lastAnswer << std::endl;
            break;
        }
    }

    return 0;
}
