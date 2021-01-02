#include <iostream>
#include <vector>

std::vector<double> sort(std::vector<double> numbers)
{
    for (size_t i{0}; i < numbers.size(); ++i)
        if (i != 1)
            for (size_t k{numbers.size() - 1}; k > i; --k)
                if (numbers[i] > numbers[k])
                {
                    double cur_pos{numbers[k]};
                    numbers[k] = numbers[i];
                    numbers[i] = cur_pos;
                }
    return numbers;
}

int main()
{
    std::vector<double> unsorted_vec{45, -5, 65, 87, 5.4, 23, 2, 1, 14, 14, 5};
    std::vector<double> sorted_vec{sort(unsorted_vec)};

    std::cout << "[ ";
    for (auto num : sorted_vec)
        if (sorted_vec[sorted_vec.size() - 1] == num)
            std::cout << " " << num << " ";
        else
            std::cout << " " << num << ", ";
    std::cout << " ]" << std::endl;
    // [  -5,  1,  2,  5,  5.4,  14,  14,  23,  45,  65,  87  ]

    return 0;
}
