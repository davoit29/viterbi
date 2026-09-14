#include <iostream>
#include <fstream>
#include <string>
#include <vector>



class coder{
    public:
        int n;
        int k;
    private:

};



class viterbi{
    public:

    private:
    



};

class abgsh_noise{
    public:

    private:

};



int main(void){
    std::ifstream file("input.txt");

    int n;
    int k;


    if (file >> n >> k) {
        std::cout << "Первое число: " << n << std::endl;
        std::cout << "Второе число: " << k << std::endl;
    } else {
        std::cerr << "Не удалось прочитать два числа из первой строки!" << std::endl;
    }

    file.close();

    return 0;
}