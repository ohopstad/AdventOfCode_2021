#include <string>
#include <fstream>
#include <iostream>
#include <vector>

int main()
{
    const std::string filename = "day1.txt";

    std::ifstream file(filename); 

    // check if the file was found
    if (!file.is_open())
    {
        std::cout << "what file?" << std::endl;
        return -1;
    }

    int value = 0;      // current line from the file
    int prev_value = 0; // previous input

    int num_increased = -1; // the number of times the line was greater than the previous line

    // check one int value at a time from the input file if it is larger than the previous
    while (file >> value)
    {
        if (value > prev_value)
            num_increased++;
        prev_value = value;
    }

    std::cout << "the value increased " << num_increased << " times." << std::endl;

    // --- part 2 ---

    file = std::ifstream(filename);     // reset file reader

    int a, b, c;
    file >> a >> b ;
    num_increased = -1;
    value = 0;
    prev_value = 0;

    while (file >> c)
    {
        prev_value = value;
        value = a+b+c;
        if (value > prev_value)
            num_increased++;
        a = b;
        b = c;
    }

    std::cout << "window increased " << num_increased << " times." << std::endl;
    return 0;
}