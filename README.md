## Contents

- **1 open3d installation**  
  Resources and instructions related to installing and using the [Open3D](http://www.open3d.org/) library with C++. This section is helpful if you are working with 3D data processing or visualization in C++.

- **2 Basic function implementation**  
  Contains implementations of fundamental C++ functions. Useful for beginners or as reference code for standard C++ operations

# Point Cloud Viewer

A simple C++ code that displays 3D point cloud data using the Open3D library.

## Overview

This project provides a straightforward way to visualize point cloud files (`.ply` format) in 3D space. It uses the Open3D library to handle point cloud I/O and visualization.

## Features

- Load point cloud files in PLY format
- Interactive 3D visualization
- Simple and clean command-line interface

## Project Structure

```
|--Cpp-h1
|   |-- app
|   |   `-- main.cpp
|   |-- data
|   |   `-- pointcloud.ply
|   |-- my_viewer
|   |   |-- my_viewer.cpp
|   |   `-- my_viewer.hpp 
|   |-- CMakeLists.txt
|   `-- .gitignore
```

## What are the files in folder and what are you suppose to do?

'app': has main.cpp code which utilises the library to view the point cloud

'data': is a set of data points in a 3D coordinate system

'my_viewer': has libraries to visualize the pointcloud

'CMakeLists': builds the project


## 1: Install Open3D 

Download Open3D binaries based on your requirements. For Ubuntu 20.04.6 LTS, download from [here](https://github.com/isl-org/Open3D/releases/download/v0.18.0/open3d-devel-linux-x86_64-cxx11-abi-0.18.0.tar.xz) and rename the extracted folder to "open3d" in the `homework_1` folder.

## 2: Write CMake

Ensure you have CMake installed (`cmake` command available in terminal).

![3Dpointcloud visualization](https://github.com/prasanna1511/Cpp/blob/main/open3d%20installation/Cpp-h1/images/cmakesteps.png)

### Steps to Build Library (as shown in the image)

Edit the `CMakeLists.txt` as follows:

```cmake
add_library (my_viewer SHARED ${CMAKE_CURRENT_SOURCE_DIR}/my_viewer/my_viewer.cpp)
```
Creating a library my_viewer, which is shared (DYNAMIC LIBRARY:The content in the library is loaded to memory at runtime, reused multiple times)

	
```
target_link_libraries (my_viewer PUBLIC Open3D::Open3D)
```

This command links the Open3D to the target my_viewwer. By this 'my_viewer' will utilize the Open3D functionalities and complier will include the Open3D components.

```
add_executable (main ${CMAKE_CURRENT_SOURCE_DIR}/app/main.cpp)
```
 
This command will compile 'main.cpp' into executable binary named "main"(it is given by you not necessary to be main ypu can change the name).Creating executable allows you to run and execute the funcatonalities which are defined in the main.cpp

```
target_link_libraries(main PRIVATE my_viewer)
```
   
Ensures the necessary libraries are linked to the executable. 

```
target_include_directories (main PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
```

Specifies where CMake should look for header files, ensuring that they are included during compilation


Include above commands to the CMakeLists.txt


## 3: BUILD

Goto terminal cd homework_1
```
cmake -Bbuild .
```
```
cmake --build build
```

if there is warning

warning: libc++.so.1, needed by ../open3d/lib/libOpen3D.so, not found (try using -rpath or -rpath-link)
   
```
sudo apt install libc++-dev
```
it installs necessary libraries. Repeat command 

```
cmake --build build
```


## 4: Visualization 3D point cloud PointCloud
The viewer supports standard Open3D visualization controls (rotation, zoom, pan)
   
```
./build/main ./data/pointcloud.ply
```
![3Dpointcloud visualization](https://github.com/prasanna1511/Cpp/blob/main/open3d%20installation/Cpp-h1/images/pointclodoutput.png)











  
