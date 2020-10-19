#include "Engenheiro.hpp"
#include "Vendedor.hpp"

void printEngenheiro (Engenheiro* engenheiro, double horasTrabalhadas) {

  std::cout << "Nome: " << engenheiro->getNome() << std::endl;
  std::cout << "Salario Mes: " << engenheiro->pagamentoMes(horasTrabalhadas) << std::endl;
  std::cout << "Projetos: " << engenheiro->getProjetos() << std::endl;
  std::cout << std::endl;

}

void printVendedor (Vendedor* vendedor, double horasTrabalhadas) {

  std::cout << "Nome: " << vendedor->getNome() << std::endl;
  std::cout << "Salario Mes: " << vendedor->pagamentoMes(horasTrabalhadas) << std::endl;
  std::cout << "Quota vendas: " << vendedor->quotaTotalAnual() << std::endl;
  std::cout << std::endl;

}


int main() {

  Engenheiro* eng1 = new Engenheiro("Joao Snow", 35, 3);
  Engenheiro* eng2 = new Engenheiro("Daniela Targaryen", 30, 1);
  Engenheiro* eng3 = new Engenheiro("Bruno Stark", 30, 2);

  printEngenheiro(eng1, 9.5);
  printEngenheiro(eng2, 8);
  printEngenheiro(eng3, 8);

  delete eng1;
  delete eng2;
  delete eng3;

  Vendedor* vend1 = new Vendedor("Tonho Lannister", 20, 5000);
  Vendedor* vend2 = new Vendedor("Jose Mormont", 25, 3000);
  Vendedor* vend3 = new Vendedor("Sonia Stark", 30, 4000);

  printVendedor(vend1, 6);
  printVendedor(vend2, 8);
  printVendedor(vend3, 8);

  delete vend1;
  delete vend2;
  delete vend3;
  
  return 0;
}
