# AirPlanner

AirPlanner es una aplicación de escritorio desarrollada en C++/CLI con Windows Forms para gestionar reservas, vuelos, aerolíneas, aeropuertos y usuarios. El proyecto se estructura como una solución de Visual Studio que incluye una interfaz gráfica y lógica de acceso a datos.

> [!IMPORTANT]
> **Nota de acceso - Igual que el repositorio de PetitFlix:** Actualmente, la ejecución completa y la conexión a la base de datos están restringidas debido a que las **credenciales originales de MariaDB y el acceso al servidor han expirado**. Mantengo este repositorio público para mostrar el código fuente, el diseño arquitectónico y el flujo de trabajo colaborativo seguido durante el desarrollo.

## Características principales

- Gestión de vuelos, aerolíneas y aeropuertos.
- Registro y autenticación de usuarios, trabajadores y administradores.
- Reserva y cancelación de vuelos.
- Creación, aprobación y seguimiento de peticiones.
- Consultas de estado de reservas y vuelos.
- Interfaz de usuario basada en formularios Windows Forms.

## Estructura del proyecto

- `AirPlanner.sln` - solución de Visual Studio.
- `AirPlanner.vcxproj` - proyecto C++/CLI.
- `*.cpp` / `*.h` - código fuente de la lógica, controladores, transacciones y formularios.
- `*.resx` - recursos para los formularios.
- `app.rc`, `app.ico`, `Resource.h` - recursos de la aplicación.
- `CppProperties.json` - configuración del proyecto para Visual Studio.

## Requisitos

- Windows 10 o posterior.
- Visual Studio 2022 (o compatible con herramientas `v143`).
- .NET Framework 4.7.2.
- MySQL Connector/C++ (el proyecto referencia `mysqlcppconn.lib`).

## Configuración recomendada

1. Instalar Visual Studio con soporte para C++ y desarrollo de aplicaciones de escritorio.
2. Instalar MySQL Connector/C++ 9.x.
3. Ajustar las rutas de include y librería si es necesario:
   - `C:\Program Files\MySQL\mysql-connector-c++-9.1.0-winx64\include\jdbc`
   - `C:\Program Files\MySQL\mysql-connector-c++-9.1.0-winx64\lib64\vs14`

## Compilar y ejecutar

1. Abrir `AirPlanner.sln` en Visual Studio.
2. Seleccionar la configuración de compilación deseada (`Debug` o `Release`) y la plataforma (`Win32` o `x64`).
3. Compilar la solución.
4. Ejecutar el proyecto desde Visual Studio.

## Conexión a base de datos

El proyecto utiliza un módulo de conexión a base de datos (`ConnexioBD.cpp` / `ConnexioBD.h`). Asegúrate de tener configurada la base de datos MySQL y las credenciales necesarias para que la aplicación pueda interactuar con ella.

## Notas

- La aplicación es principalmente una solución de escritorio para la gestión de aerolíneas y reservas.
- Si necesitas adaptar rutas o dependencias, revisa el archivo `AirPlanner.vcxproj`.

## Licencia

No se ha especificado una licencia en el repositorio. Añade un archivo `LICENSE` si quieres definir una licencia clara para el proyecto.
