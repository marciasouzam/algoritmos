#include <iostream>

int main() {
    int combustivel;
    char tipo;

    std:: cout << "Digite a quantidade de litros que deseja " << std::endl;
    std:: cin >> combustivel;

    std:: cout << "Digite o tipo de combustível, considerando A-álcool e G-Gasolina " << std::endl;
    std:: cin >> tipo;

    if (tipo == 'A' || tipo == 'a') { 
        if (combustivel <= 20) {
            double valorPagoTotal = combustivel * 1.90;
            double valorDesconto = (valorPagoTotal * 0.03);
            std:: cout << "O valor a ser pago é de R$ " << valorPagoTotal - valorDesconto << std::endl;
        } else if (combustivel > 20) {
            double valorPagoTotal = combustivel * 1.90;
            double valorDesconto = (valorPagoTotal * 0.05);
            std:: cout << "O valor a ser pago é de R$ " << valorPagoTotal - valorDesconto << std::endl;
        }

    } else if (tipo == 'G' || tipo == 'g') {
        if (combustivel <= 20) {
            double valorPagoTotal = combustivel * 2.50;
            double valorDesconto = (valorPagoTotal * 0.04);
            std:: cout << "O valor a ser pago é de R$ " << valorPagoTotal - valorDesconto << std::endl;
        } else if (combustivel > 20) {
            double valorPagoTotal = combustivel * 2.50;
            double valorDesconto = (valorPagoTotal * 0.06);
            std:: cout << "O valor a ser pago é de R$ " << valorPagoTotal - valorDesconto << std::endl;
        }

        return 0;
    } else {
        std:: cout << "Tipo de combustível inválido!" << std::endl;
    }

    return 0;
}
