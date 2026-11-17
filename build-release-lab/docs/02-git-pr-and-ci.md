# Lesson 2 — Branch and pull request

```powershell
git switch main
git pull origin main
git switch -c feature/lab-message
```
Make a small edit in `app/src/main.cpp`, then:
```powershell
git status
git diff
git add build-release-lab/app/src/main.cpp
git diff --cached
git commit -m "Update learning lab demo"
git push -u origin feature/lab-message
```
Create a PR from your feature branch into `main`. Inspect the Actions tab.
Record the first meaningful error, runner OS, compiler, failed step, file/line,
and whether the failure is configure, compile, or test related.
