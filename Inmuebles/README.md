

| Trabajo práctico Nº 3 Programación Orientada a Objetos Laboratorio de Computación II |  |
| :---- | :---: |

---

**Enunciado**

La inmobiliaria Gonzalez\&Lara S.A. desea un programa que permita registrar todos los inmuebles que hay disponibles para compra o alquiler.  
Los inmuebles pueden ser: Casas, Casas quintas, Departamentos, Locales y Terrenos.

Para las casas se registra la siguiente información:

| Atributo | Tipo de dato |
| :---- | :---- |
| Código de inmueble | entero |
| Calle | cadena de 50 caracteres |
| Número | cadena de 6 caracteres |
| Localidad | cadena de 50 caracteres |
| Antigüedad construcción | entero |
| Superficie total m2 | float |
| Superficie cubierta m2 | float |
| Habitaciones | int |
| Precio venta | float |
| Precio alquiler | float |
| Apellido del dueño | cadena de 50 caracteres |
| Nombre del dueño | cadena de 50 caracteres |
| DNI del dueño | cadena de 12 caracteres |
| Celular del dueño | cadena de 15 caracteres |

Para las casas quintas se registra la siguiente información

| Atributo | Tipo de dato |
| :---- | :---- |
| Código de inmueble | entero |
| Calle | cadena de 50 caracteres |
| Número | cadena de 6 caracteres |
| Localidad | cadena de 50 caracteres |
| Antigüedad construcción | entero |
| Superficie total m2 | float |
| Superficie cubierta m2 | float |
| Pileta | bool |
| Quincho | bool |
| Habitaciones | int |
| Precio venta | float |
| Precio alquiler | float |
| Apellido del dueño | cadena de 50 caracteres |
| Nombre del dueño | cadena de 50 caracteres |
| DNI del dueño | cadena de 12 caracteres |
| Celular del dueño | cadena de 15 caracteres |

Para los departamentos se registra la siguiente información:

| Atributo | Tipo de dato |
| :---- | :---- |
| Código de inmueble | entero |
| Calle | cadena de 50 caracteres |
| Número | cadena de 6 caracteres |
| Piso | cadena de 3 caracteres |
| Departamento | cadena de 3 caracteres |
| Localidad | cadena de 50 caracteres |
| Antigüedad construcción | entero |
| Superficie total m2 | float |
| Superficie cubierta m2 | float |
| Habitaciones | int |
| Superficie balcón m2 | float |
| Con cochera | bool |
| Costo expensa | float |
| Precio venta | float |
| Precio alquiler | float |
| Apellido del dueño | cadena de 50 caracteres |
| Nombre del dueño | cadena de 50 caracteres |
| DNI del dueño | cadena de 12 caracteres |
| Celular del dueño | cadena de 15 caracteres |

Para los locales se registra la siguiente información:

| Atributo | Tipo de dato |
| :---- | :---- |
| Código de inmueble | entero |
| Calle | cadena de 50 caracteres |
| Número | cadena de 6 caracteres |
| Localidad | cadena de 50 caracteres |
| Antigüedad construcción | entero |
| Superficie total m2 | float |
| Superficie estacionamiento m2 | float |
| Zona comercial | bool |
| Precio venta | float |
| Precio alquiler | float |
| Apellido del dueño | cadena de 50 caracteres |
| Nombre del dueño | cadena de 50 caracteres |
| DNI del dueño | cadena de 12 caracteres |
| Celular del dueño | cadena de 15 caracteres |

Para los terrenos se registra la siguiente información:

| Atributo | Tipo de dato |
| :---- | :---- |
| Código de inmueble | entero |
| Calle | cadena de 50 caracteres |
| Número | cadena de 6 caracteres |
| Localidad | cadena de 50 caracteres |
| Ancho en metros | float |
| Largo en metros | float |
| Superficie construible m2 | float |
| Precio venta | float |
| Precio alquiler | float |
| Apellido del dueño | cadena de 50 caracteres |
| Nombre del dueño | cadena de 50 caracteres |
| DNI del dueño | cadena de 12 caracteres |
| Celular del dueño | cadena de 15 caracteres |

Diseñar las clases que considere necesarias para poder representar las casas, casas quintas, departamentos, locales y terrenos que se encuentran tanto a la venta como en alquiler. Teniendo en cuenta que:

- Si un inmueble está disponible para la venta es porque registra un precio de venta mayor a cero de lo contrario su valor es $ 0\.  
- Si un inmueble está disponible para alquiler es porque registra un precio de alquiler mayor a cero de lo contrario su valor es $ 0\.

Hacer un programa que solicite el tipo de inmueble (1 \- Casa, 2 \- Casa quinta, 3 \- Departamento, 4 \- Local o 5 \- Terreno) y luego solicite los datos del mismo y los muestre por pantalla.  
