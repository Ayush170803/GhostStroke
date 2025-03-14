
# GhostStroke (C++)

This project is a Windows-based keylogger built using C++. It records both keyboard and mouse inputs and logs them into a file named log.txt. Every keystroke is saved with a human-readable label, simplifying analysis.

# Functionality

The keylogger operates in the background, capturing keystrokes as the user types. It utilizes Windows API functions to track key presses and logs them efficiently.

# Key Features:

- Monitors all keyboard inputs

- mouse clicks (left, right, and middle button)

- Uses Windows API for seamless key detection

- Runs discreetly in the background

- Logs data into an easily accessible text file

# 🚀 Installation and Execution

- Compilation -> Use a C++ compiler like g++ or an IDE such as Visual Studio to compile the program.

- Running the Keylogger -> Once compiled, execute the program to start recording keystrokes.

- Accessing Logs -> The logged keystrokes will be stored in log.txt in the same directory as the executable.

# ⌨️ Key Labeling System

The following labels are used to represent key events:

## Modifier Keys:

  [SHIFT] - Shift key

  [CTRL] - Control key
  
  [ALT] - Alt/Menu key
  
  [LWIN] - Left Windows key
  
  [RWIN] - Right Windows key
  
  [CAPS] - Caps Lock key
  
  [NUMLOCK] - Num Lock key
  
  [SCROLL] - Scroll Lock key

## Function Keys:

  [F1] to [F12] - Function keys F1 to F12

## Arrow Keys:

  [LEFT ARROW], [RIGHT ARROW], [UP ARROW], [DOWN ARROW]

## Commonly Used Keys:

  [BACKSPACE], [TAB], [ENTER], [ESCAPE], [SPACE], [DELETE], [INSERT], [HOME], [END], [PAGE UP], [PAGE DOWN]

## Mouse Inputs:

  [LEFT CLICK], [RIGHT CLICK], [MIDDLE MOUSE BUTTON]

## Additional Codes:

  [KEY DOWN], [KEY UP], [SYSTEM KEY DOWN], [SYSTEM KEY UP], [CHARACTER]

## Special symbols: ;, =, ,, -, ., /, \, [, ], ':'

# 🔒 Security Measures Against Keyloggers

- Keyloggers pose a security risk, but these measures can help protect you:

- Install Trusted Antivirus Software – Many security tools can detect and remove keyloggers.

- Keep Software Updated – Regular updates fix security vulnerabilities.

- Beware of Phishing & Suspicious Downloads – Avoid untrusted links and attachments.

- Use a Virtual Keyboard for Sensitive Entries – Helps evade keyloggers when entering passwords.

- Enable Two-Factor Authentication (2FA) – Adds an extra security layer.


# 🖥️ Technical Insights

The program utilizes the following C++ functions and Windows API calls:

- GetAsyncKeyState() – Checks if a key is currently pressed.

- Virtual Key Codes – Converts key events into readable formats. Virtual key codes are referenced from the official [Microsoft documentation](https://learn.microsoft.com/en-us/windows/win32/inputdev/virtual-key-codes).

- Save() – Writes captured keystrokes to log.txt.

- Virtual Key Codes – Converts key events into readable formats.

- FreeConsole() – Detaches the process from the console, keeping it hidden.

- Sleep() – Pauses execution for improved performance.

# 🛡️ How to Stay Secure

- To protect yourself from keyloggers:

- Use an on-screen keyboard for entering passwords and financial details.

- Keep your antivirus software updated to detect keylogging threats.

- Set up a firewall to monitor suspicious outbound data transmissions.

- Use a password manager to store and autofill credentials securely.

# 📥 Installation Guide

 Clone this repository using Git Bash or download it manually:
```console
git clone https://github.com/Ayush170803/GhostStroke
```
# 🤝 Contributions

 Contributions are welcome! If you wish to contribute, open an issue or reach out before submitting modifications.

# Disclaimer

 This software is for educational purposes only. Any misuse of this tool is the sole responsibility of the user. The author bears no liability 
 for unethical use.
 Use responsibly and follow ethical guidelines when experimenting with this project.

