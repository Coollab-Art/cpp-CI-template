$ErrorActionPreference = "Stop"
$root = Split-Path -Parent $PSScriptRoot
$build = Join-Path $root "build-debug"
cmake -S $root -B $build -DCMAKE_BUILD_TYPE=Debug
if ($LASTEXITCODE -ne 0) { throw "Configure failed" }
cmake --build $build --config Debug --parallel
if ($LASTEXITCODE -ne 0) { throw "Build failed" }
ctest --test-dir $build --output-on-failure
if ($LASTEXITCODE -ne 0) { throw "Tests failed" }
