#!/bin/bash

count=0
limit=50

for file in *.cpp *.py; do
  [ -f "$file" ] || continue
  git add "$file"
  git commit -m "Add $file"
  count=$((count + 1))
  if [ "$count" -eq "$limit" ]; then
    break
  fi
done

# Only one push after 50 commits
git push origin main
