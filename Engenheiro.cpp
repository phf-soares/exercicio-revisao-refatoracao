#include "Engenheiro.hpp"

Engenheiro::Engenheiro(std::string nome, double salarioHora, int projetos):
     Empregado(nome, salarioHora), _projetos(projetos) {}

void Engenheiro::setProjetos(int p) {
  _projetos = p;
}

double Engenheiro::getProjetos() const {
  return _projetos;
}