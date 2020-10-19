#include "Empregado.hpp"

Empregado::Empregado(std::string nome, double salarioHora):
 _nome(nome), _salarioHora(salarioHora) {}

double Empregado::pagamentoMes(double horasTrabalhadas) {
  double tempoEfetivo = horasTrabalhadas;
  const double horasPadrao = 8;  
  if (horasTrabalhadas > horasPadrao) {
      const double calculoHorasExtra = 0.5;
      double horasExtra = horasTrabalhadas - horasPadrao;
      tempoEfetivo += horasExtra * calculoHorasExtra;
  }
  return tempoEfetivo * _salarioHora;
}

void Empregado::setNome(std::string n) {
  _nome = n;
}
void Empregado::setSalarioHora(double s) { 
  _salarioHora = s;
} 

std::string Empregado::getNome() const {
  return _nome;
}

double Empregado::getSalarioHora() const { 
  return _salarioHora;
}