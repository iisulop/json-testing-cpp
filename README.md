# Json parsing with C++

Uses [Conan](https://conan.io) for installing dependencies. Install Conan from [conan.io](https://conan.io) and [set up default profile as described in the getting started example](https://docs.conan.io/2/tutorial/consuming_packages/build_simple_cmake_project.html):
```
conan profile detect --force
```

Install the dependencies and compile the binary using conan and CMake:
```
conan install . --output-folder=build --build=missing
cd build
cmake .. -DCMAKE_TOOLCHAIN_FILE=conan_toolchain.cmake -DCMAKE_BUILD_TYPE=Release
cmake --build .
```
