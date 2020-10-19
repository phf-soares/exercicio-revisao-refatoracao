#ifndef ENGENHEIRO_HPP
#define ENGENHEIRO_HPP

#include "Empregado.hpp"

class Engenheiro : public Empregado {

  public:
    Engenheiro(std::string nome, double salarioHora, int projetos);
    
    void setProjetos(int p);
    double getProjetos() const;

  private:
    int _projetos;
	
};

#endif