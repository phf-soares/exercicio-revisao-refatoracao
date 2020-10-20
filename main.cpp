#include "Engenheiro.hpp"
#include "Vendedor.hpp"

void printNDelEng (Engenheiro* engenheiro, double horasTrabalhadas) {
  std::cout << "Nome: " << engenheiro->getNome() << std::endl;
  std::cout << "Salario Mes: " << engenheiro->pagamentoMes(horasTrabalhadas) << std::endl;
  std::cout << "Projetos: " << engenheiro->getProjetos() << std::endl;
  std::cout << std::endl;
  delete engenheiro;
}

void printNDelVend (Vendedor* vendedor, double horasTrabalhadas) {
  std::cout << "Nome: " << vendedor->getNome() << std::endl;
  std::cout << "Salario Mes: " << vendedor->pagamentoMes(horasTrabalhadas) << std::endl;
  std::cout << "Quota vendas: " << vendedor->quotaTotalAnual() << std::endl;
  std::cout << std::endl;
  delete vendedor;
}


int main() {
  Engenheiro* eng1 = new Engenheiro("Joao Snow", 35, 3);
  Engenheiro* eng2 = new Engenheiro("Daniela Targaryen", 30, 1);
  Engenheiro* eng3 = new Engenheiro("Bruno Stark", 30, 2);

  Vendedor* vend1 = new Vendedor("Tonho Lannister", 20, 5000);
  Vendedor* vend2 = new Vendedor("Jose Mormont", 25, 3000);
  Vendedor* vend3 = new Vendedor("Sonia Stark", 30, 4000);

  printNDelEng(eng1, 9.5);
  printNDelEng(eng2, 8);
  printNDelEng(eng3, 8);

  printNDelVend(vend1, 6);
  printNDelVend(vend2, 8);
  printNDelVend(vend3, 8);
  
  return 0;
}