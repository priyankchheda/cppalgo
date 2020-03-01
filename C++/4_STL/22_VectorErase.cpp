#include <iostream>
#include <vector>

int main()
{   
    int n;
    std::cin >> n;
    std::vector<int> vec(n);
    for (int i = 0; i < n; i++)
        std::cin >> vec[i];
    
    int index_to_remove;
    std::cin >> index_to_remove;
    vec.erase(vec.begin()+index_to_remove-1);

    int start_index, end_index;
    std::cin >> start_index >> end_index;
    vec.erase(vec.begin()+start_index-1, vec.begin()+end_index-1);

    std::cout << vec.size() << "\n";
    for (int a: vec)
        std::cout << a << " ";
}