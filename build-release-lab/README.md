# Build & Release Learning Lab

Copy this folder into the root of your `cpp-CI-template` clone. The archive also
contains a repository-level `.github/workflows/build_release_learning_lab.yml`.

## Learn
1. CMake configure/build/test, Debug and Release.
2. Git branch, commit, push, pull request and CI diagnosis.
3. Git subtree add, pull, split and push using a local component repository.
4. GitHub Actions matrix builds, path filters, job dependencies and artifacts.

## Local build (PowerShell from the main repository root)
```powershell
cmake -S build-release-lab -B build-release-lab/build -DCMAKE_BUILD_TYPE=Debug
cmake --build build-release-lab/build --config Debug --parallel
ctest --test-dir build-release-lab/build --output-on-failure
```
Read the lessons in `docs/` in order. The subtree source is a seed folder, not
yet a Git repository; initialise it as described in `docs/03-git-subtree.md`.
