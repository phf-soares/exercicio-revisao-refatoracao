#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {

	public:
    Empregado(std::string nome, double salarioHora);

    double pagamentoMes(double horasTrabalhadas);

    void setNome(std::string n);
    void setSalarioHora(double s); 

    std::string getNome() const;
    double getSalarioHora() const;    

  protected:
    std::string _nome;
    double _salarioHora;

};

#endif
