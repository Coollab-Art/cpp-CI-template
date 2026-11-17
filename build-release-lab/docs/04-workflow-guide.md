# Lesson 4 — GitHub Actions workflow guide

The workflow is installed at `.github/workflows/build_release_learning_lab.yml`
at the main repository root. It demonstrates:
- push, pull-request and manual (`workflow_dispatch`) triggers;
- path filters so unrelated changes do not start this lab;
- read-only token permissions and concurrency cancellation;
- a six-entry OS/compiler/build-type matrix;
- checkout, toolchain reporting, CMake configure, build and CTest;
- failure-only CMake cache artifact upload;
- a dependent summary job using `needs` and `always()`.

Experiments: change the demo text, break one test expectation, introduce a
temporary compile error, and then fix each issue. Observe how the failed step
and matrix job differ. Never put credentials or tokens in workflow files.
