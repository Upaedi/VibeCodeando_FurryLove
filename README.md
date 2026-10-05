# VibeCodeando_FurryLove

Base inicial en C++ para arrancar una versión propia de **FurryLove** con una estructura clara y escalable.

## Estructura propuesta

```text
.
├── CMakeLists.txt
├── include/
│   └── core/
│       └── Game.h
└── src/
    ├── core/
    │   └── Game.cpp
    └── main.cpp
```

## ¿Qué incluye?

- `main.cpp`: punto de entrada.
- `Game.h / Game.cpp`: clase base para centralizar el flujo principal del juego.
- Mensaje inicial con próximos pasos para guiar el desarrollo.

## Compilar y ejecutar

```bash
cmake -S . -B build
cmake --build build
./build/furrylove
```
