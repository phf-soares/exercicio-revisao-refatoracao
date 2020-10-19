#include "Vendedor.hpp"

Vendedor::Vendedor(std::string nome, double salarioHora, double quotaMensalVendas):
     Empregado(nome, salarioHora), _quotaMensalVendas(quotaMensalVendas) {}

void Vendedor::setQuotaMensalVendas(double q) {
  _quotaMensalVendas = q;
}

double Vendedor::getQuotaMensalVendas() const {
  return _quotaMensalVendas;
}

double Vendedor::quotaTotalAnual() {
  const double mesesAno = 12;
  return _quotaMensalVendas * mesesAno;
}