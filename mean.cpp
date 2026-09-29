#include <iostream>
#include <numeric>
#include <vector>
#include <stdexcept>

double mean(const std::vector<double>& values) {
    if (values.empty()) {
        std::cerr << "Attention : le vecteur est vide !\n";
        return 0.0; // ou lever une exception
    }
    return std::accumulate(values.begin(), values.end(), 0.0) / values.size();
}

int main() {
    // Test 1 : données normales (10, 20, 30 -> moyenne = 20)
    const std::vector<double> t1{10.0, 20.0, 30.0};
    std::cout << "Moyenne t1 : " << mean(t1) << '\n';

    // Test 2 : vecteur vide (exercice demandé par le cours)
    const std::vector<double> t_vide{};
    std::cout << "Moyenne vecteur vide : " << mean(t_vide) << '\n';

    return 0;
}