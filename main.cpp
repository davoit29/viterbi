#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <print>


class coder{
    public:
        coder();
        short int n;
        short int k;
        std::vector<std::vector<short int>> G ;
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
        std::cerr << "Не удалось !" << std::endl;
    }
    std::vector<std::vector<short int>> G(k, std::vector<short int>(n, 0));

    for(int i = 0; i<k; i++){
        for(int j = 0; j<n; j++){
            file >> G[i][j];
        }

    }

    

    for(int i = 0; i<k; i++){
        for(int j = 0; j<n; j++){
            std::printf("Элемент матрицы под номером %d %d равен %d\n", i, j, G[i][j]);
            
        }

    }

    file.close();

    return 0;
}