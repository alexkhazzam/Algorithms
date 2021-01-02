#include <iostream>
#include <vector>

std::vector<double> sort(std::vector<double> v)
{
    for (size_t i{0}; i < v.size(); ++i)
    {
        double _min_el{v[i]}, _min_idx{static_cast<double>(i)};
        for (size_t k{static_cast<size_t>(v.size() - 1)}; k > i; --k)
        {
            if (v[k] < _min_idx)
            {
                _min_el = k;
                _min_idx = v[k];
            }
        }
        double _curr_el{v[i]};
        v[i] = _min_idx;
        v[_min_el] = _curr_el;
    }
    return v;
}

int main()
{
    std::vector<double> unsorted_vec{6, 3, 5, 2, -5, 0.5, 34, 1};
    std::vector<double> sorted_vec{sort(unsorted_vec)};

    std::cout << "[ ";
    for (auto num : sorted_vec)
        if (sorted_vec[sorted_vec.size() - 1] == num)
            std::cout << " " << num << " ";
        else
            std::cout << " " << num << ", ";
    std::cout << " ]" << std::endl;
    // [ -5, 0.5, 1, 2, 3, 5, 6, 34 ]

    return 0;
}