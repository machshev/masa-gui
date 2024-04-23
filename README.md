# masa-gui

Native QT GUI for the [Masa](https://github.com/machshev/masa) system.

## Build

First clone the repo.

```bash
git clone https://github.com/machshev/masa-gui
cd masa-gui
```

Create a `build/` directory to build into.

```bash
mkdir -p build
cd build

cmake -G Ninja -DCMAKE_EXPORT_COMPILE_COMMANDS=1 ../masa/
ninja
```

This will create a binary called `masa` in the build directory.
