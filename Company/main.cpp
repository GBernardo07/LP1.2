#include <iostream>
#include <string>
#include <vector>

#include "empresa.hpp"
#include "funcionario.hpp"

int main(int argc, char *argv[]) {

    int nFunc, aux = 0;
    double aumento;
    Empresa a;
    Funcionario x;
    std::string referencia;
    std::vector <Funcionario> funcionarios;

    std::cout << "Nome da empresa: ";
    getline(std::cin, referencia);
    a.setNome(referencia);

    std::cout << "CNPJ: ";
    getline(std::cin, referencia);
    a.setCnpj(referencia);

    std::cout << "\nQuantos funcionarios deseja inserir?" << std::endl;
    std::cin >> nFunc;
    std::cin.ignore();

    for (int i = 0; i < nFunc; i++) {

        std::cout << "\nInsira o nome do funcionario " << i+1 << ": ";
        getline(std::cin, referencia);
        x.setNome(referencia);

        std::cout << "Insira o salario do funcionario " << i+1 << ": ";
        std::cin >> aux;
        x.setSalario(aux);
        std::cin.ignore();

        std::cout << "Insira o Departamento em que o funcionario " << i+1 << " trabalha: ";
        getline(std::cin, referencia);
        x.setDepartamento(referencia);

        funcionarios.push_back(x);
    }   

    std::cout << "\nTodos os funcionarios do departamento de 'Vendas' recebem um aumento no salario" << std::endl;

    for (auto it = funcionarios.begin(); it != funcionarios.end(); it++) {
        if ((*it).getDepartamento() == "Vendas") {
            aumento = (*it).getSalario() * 1.1;
            (*it).setSalario(aumento);
            std::cout << "Novo salario de " << (*it).getNome() << " é: R$" << (*it).getSalario() << std::endl;
        }
    }

    



    return 0;
}