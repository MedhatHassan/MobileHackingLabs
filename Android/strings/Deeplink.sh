# 1. Stop the app to clear memory
adb shell am force-stop com.mobilehackinglab.challenge

# 2. Get the date from the device
D=$(adb shell date +%d/%m/%Y | tr -d '\r\n')

# 3. Inject the XML with proper escaped quotes
# Note the \" inside the string to ensure the file on disk has quotes
adb shell "su -c 'printf \"<?xml version=\\\"1.0\\\" encoding=\\\"utf-8\\\" standalone=\\\"yes\\\"?><map><string name=\\\"UUU0133\\\">$D</string></map>\" > /data/data/com.mobilehackinglab.challenge/shared_prefs/DAD4.xml'"

# 4. Verify the file looks like this: <string name="UUU0133">...
adb shell "su -c 'cat /data/data/com.mobilehackinglab.challenge/shared_prefs/DAD4.xml'"

# 5. Fire the intent with the correct payload (mhl_secret_1337)
# Base64 of "mhl_secret_1337" is "bWhsX3NlY3JldF8xMzM3"
adb shell am start -a android.intent.action.VIEW \
    -d "mhl://labs/bWhsX3NlY3JldF8xMzM3" \
    -n com.mobilehackinglab.challenge/.Activity2