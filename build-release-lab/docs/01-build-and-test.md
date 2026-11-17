# Lesson 1 — CMake build and tests

From the main repository root:
```powershell
cmake -S build-release-lab -B build-release-lab/build-debug -DCMAKE_BUILD_TYPE=Debug
cmake --build build-release-lab/build-debug --config Debug --parallel
ctest --test-dir build-release-lab/build-debug --output-on-failure
```
Repeat with `build-release-lab/build-release` and `-DCMAKE_BUILD_TYPE=Release`.

Failure exercise: temporarily change `return left + right;` to
`return left + right + 1;`, rebuild, run CTest, identify the failed test and
restore the correct code. Do not commit the deliberate defect.
