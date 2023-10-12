#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::vector <string> first_vector = {"June", "July", "August"};
    
    first_vector.at(1) = "April";
    first_vector.reserve(4);
    
    std::vector <string> second_vector = {"March", "April", "May"};
    
    if (first_vector == second_vector) {
        std::cout << "Равны" << std::endl;
    } 
    else 
    {
        std::cout << "Не равны" << std::endl; 
    }
    
    std::vector < std::vector <int> > vec = {{1, 2, 3},
                                            {3, 4, 5}
    };
    
    std::cout << "Длина вектора равна: ", vec.size() << std::endl;
    
    vec.push_back({6, 7, 8});
        
    std::cout << "Длина вектора после пуша равна: ", vec.size() << std::endl;
    
    vec.pop_back();

    std::cout << "Длина вектора после поп бэка равна: ", vec.size() << std::endl;
    
    std::cout << "Первая ячейка: ", vec.front() << std::endl;
    
    std::cout << "Последняя ячейка: ", vec.back() << std::endl;
}
