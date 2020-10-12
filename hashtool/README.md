# String hash tool
this tool can be used to hash strings for usage in `switch` statements
## Usage
You can use this tool in two modes:
#### Header generation mode
```
./hashtool ./stringlist ./output.h 
```
##### the input list must have LF line ending and must end with a new line
if the string list looks like:
```text
manifest
version
align
allow
allowfullscreen
.....
``` 
the output will look like:
```c
#define WEBCORE_ATTR_MANIFEST 7571253482008476
#define WEBCORE_ATTR_VERSION 229443708557163
#define WEBCORE_ATTR_ALIGN 210667447728
#define WEBCORE_ATTR_ALLOW 210667451268
#define WEBCORE_ATTR_ALLOWFULLSCREEN 14423745824363943095
.....
```
#### Inline mode
```
./hashtool test
```
and the output will be:
```text
6385723493
```

## Building
building is done through CMake so all you have to do is:
```commandline
mkdir build
cd build
cmake ..
make
```