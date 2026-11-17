# Lesson 3 — Git subtree practice

Use **Git Bash** for these commands if `git subtree` is not available in
PowerShell.

## A. Create a local component repository
```bash
cd build-release-lab/subtree-source/shared-logging
git init -b main
git add .
git commit -m "Create shared logging component"
```
If Git asks for identity, set `git config user.name` and `git config user.email`
for this repository, then repeat the commit.

## B. Import it into the main repository
Return to the main repository root:
```bash
cd ../../../../
git subtree add --prefix=build-release-lab/vendor/shared-logging ./build-release-lab/subtree-source/shared-logging main --squash
```
`--prefix` is the destination folder in the main repository. `--squash`
combines the imported history into a single import commit.

## C. Update the component and pull the update
Edit `logger.cpp` in `subtree-source/shared-logging`, then:
```bash
cd build-release-lab/subtree-source/shared-logging
git add .
git commit -m "Add warning log level"
cd ../../../../
git subtree pull --prefix=build-release-lab/vendor/shared-logging ./build-release-lab/subtree-source/shared-logging main --squash
```

## D. Export a change from the main project back to the component
Make and commit a change under `vendor/shared-logging` in the main repository:
```bash
git subtree split --prefix=build-release-lab/vendor/shared-logging -b subtree-export
git push ./build-release-lab/subtree-source/shared-logging subtree-export:main
```
Inspect history with `git log --oneline --graph --decorate --all`.
