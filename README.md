# WebCore's dynamic renderer
this is a highly experimental project and is not ready for production use

## Building the project
building is done through `CMake` 
but you first need to make sure you have `re2c` installed.
### for macOS users with homebrew
```shell script
brew install re2c
```
### for debian-based linux distros
```shell script
sudo apt install re2c
```
### for arch-based linux distros
```shell script
sudo pacman -S re2c
```
### for users with RPM-based distros
```shell script
sudo dnf install re2c
```
after installing re2c you can simply:
```
mkdir build
cd build
cmake ..
make
```