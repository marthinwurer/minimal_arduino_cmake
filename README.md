# A minimal Arduino CMake example

```
git submodule init
git submodule update
sudo apt install arduino
mkdir build
cd build
cmake ..
make
sudo make upload
```

if `make upload` fails, edit `CMakeLists.txt` and change `/dev/ttyACM0` to `/dev/ttyUSB0`
