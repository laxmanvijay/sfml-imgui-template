## SFML_IMGUI_TEMPLATE

This is a sample template repository that uses vcpkg and cmake to setup sfml and imgui

To install the necessary dependencies, install vcpkg first.

```bash
git clone https://github.com/microsoft/vcpkg.git
cd vcpkg

./bootstrap-vcpkg.sh  # Linux/macOS
.\bootstrap-vcpkg.bat  # Windows
```

Add the install directory to `VCPKG_ROOT`

To build:

```bash
cmake --preset=default
cmake --build build
```

To run:

```bash
./build/sfmlimguitemplate
```
