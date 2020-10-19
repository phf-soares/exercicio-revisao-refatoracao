#ifndef VENDEDOR_HPP
#define VENDEDOR_HPP

#include "Empregado.hpp"

class Vendedor : public Empregado {

  public:
    Vendedor(std::string nome, double salarioHora, double quotaMensalVendas);     

    double quotaTotalAnual();

    void setQuotaMensalVendas(double q);
    double getQuotaMensalVendas() const;
    
  private:
    double _quotaMensalVendas;  

};


#endif