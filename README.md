# Almacén de cargas con herencia y plantillas (C++)

Práctica 3 de **Tecnología de la Programación** (Ingeniería Informática, Universidad de Zaragoza, curso 2025-26).

Modelo de un sistema de transporte de cargas que combina herencia (también múltiple) y plantillas:

- `Carga` → `CargaEstandar`, `Toxico`, `SerVivo`.
- `Almacen` → `Camion`.
- `Contenedor<T>`, que es a la vez una carga y un almacén, de modo que se pueden meter contenedores dentro de contenedores; y `Producto<T>`.

Se compila con `make`.

**Autores:** Javier Valero y Pablo Muruzábal.
