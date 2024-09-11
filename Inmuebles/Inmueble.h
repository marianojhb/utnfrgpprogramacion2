#pragma once
#include <string>

class Inmueble
{
public:
    Inmueble();

    // Getters:
    int getIdInmueble();
    const std::string getCalle() const;
    const std::string getCalleNum() const;
    const std::string getLocalidad() const;
    float getPrecioVta();
    float getPrecioAlq();
    const std::string getApellidoDuenio() const;
    const std::string getNombreDuenio() const;
    const std::string getDniDuenio() const;
    const std::string getCelularDuenio() const;

    //Setters:
    void setIdInmueble(int);
    void setCalle(const std::string&calle);
    void setCalleNum(int);
    void setLocalidad(const std::string&localidad);
    void setPrecioVta(float);
    void setPrecioAlq(float);
    void setApellidoDuenio(const std::string&apellidoDuenio);
    void setNombreDuenio(const std::string&nombreDuenio);
    void setDniDuenio(const std::string&dniDuenio);
    void setCelularDuenio(const std::string&celularDuenio);

protected:

private:
    int _idInmueble;
    std::string _calle;
    std::string _calleNum;
    std::string _localidad;
    float _precioVta;
    float _precioAlq;
    std::string _apellidoDuenio;
    std::string _nombreDuenio;
    std::string _dniDuenio;
    std::string _celularDuenio;
};

