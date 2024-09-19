#pragma once
#include <string>

class Inmueble
{
public:
    Inmueble();

    //getters
    virtual void imprimir();
    void imprimirDatosInmueble(); // la tengo que implementar en cada derivada
    void imprimirDatosPrecio();
    void imprimirDatosPropietario();

    //setters
    virtual void cargar();
    void cargarDatosInmueble(); // la tengo que implementar en cada derivada
    void cargarDatosPrecio();
    void cargarDatosPropietario();


    // Getters:
    [[nodiscard]] int getIdInmueble() const;
    [[nodiscard]] std::string getCalle() const;
    [[nodiscard]] std::string getCalleNum() const;
    [[nodiscard]] std::string getLocalidad() const;
    [[nodiscard]] float getPrecioVta() const;
    [[nodiscard]] float getPrecioAlq() const;
    [[nodiscard]] std::string getApellidoDuenio() const;
    [[nodiscard]] std::string getNombreDuenio() const;
    [[nodiscard]] std::string getDniDuenio() const;
    [[nodiscard]] std::string getCelularDuenio() const;

    //Setters:
    void setIdInmueble(int);
    void setCalle(const std::string &calle, int maxLength=51);
    void setCalleNum(const std::string &calleNum, int maxLength=7);
    void setLocalidad(const std::string &localidad, int maxLength=51);
    void setPrecioVta(float);
    void setPrecioAlq(float);
    void setApellidoDuenio(const std::string &apellidoDuenio, int maxLength=51);
    void setNombreDuenio(const std::string &nombreDuenio, int maxLength=51);
    void setDniDuenio(const std::string &dniDuenio, int maxLength=13);
    void setCelularDuenio(const std::string &celularDuenio, int maxLength=16);

    virtual ~Inmueble() = default;

protected:

private:
    int _idInmueble;
    char  _calle[51];
    char  _calleNum[7];
    char  _localidad[51];
    float _precioVta;
    float _precioAlq;
    char _apellidoDuenio[51];
    char _nombreDuenio[51];
    char _dniDuenio[13];
    char _celularDuenio[16];
};

