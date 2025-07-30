@ECHO OFF
IF NOT EXIST Release\NUL MD Release 2>nul
CD Release

cmake .. -G Ninja -DCMAKE_BUILD_TYPE=Release
cmake --build .

CD ..
