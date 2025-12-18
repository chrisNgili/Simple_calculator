# 🧮 C++ Console Calculator — Terminal-Based Arithmetic Program

## 1. Objective

**Technology Choice:**  
This project is implemented using **C++ (C++11 Standard Library)**.

**Why C++ was chosen:**
- **High Performance:** C++ programs compile to native machine code, making them fast and efficient.
- **Strong Fundamentals:** Ideal for learning core programming concepts such as input/output, control flow, and `switch` statements.
- **Wide Industry Use & Community Support:** C++ is extensively used in systems programming, game engines, and academic environments.

**End Goal:**  
By the end of this guide, you will have a fully functional **terminal-based calculator** that accepts two numbers and an arithmetic operator from the user, performs the calculation, and displays the result.

---

## 2. Quick Summary of the Technology

**What It Is:**  
C++ is a compiled, general-purpose programming language known for performance, efficiency, and fine-grained control over system resources.

**Key Characteristics:**
- Compiled language with fast execution
- Strongly typed and statically checked
- Supports procedural and object-oriented programming
- Extensive standard library

**Use Cases:**
- Operating systems and system utilities
- Game engines and graphics software
- Embedded systems and real-time applications
- Competitive programming and algorithms

**Real-World Example:**  
The **Unreal Engine**, used in popular games such as *Fortnite*, is built primarily using C++ due to its performance and hardware-level control.

---

## 3. System Requirements

### Operating Systems
- Windows 10 or later
- macOS 11 (Big Sur) or later
- Linux (Ubuntu 20.04+ recommended)

### Development Tools
- Text editor or IDE:
  - Recommended: Visual Studio Code, Code::Blocks, CLion
  - Optional: Visual Studio (Windows)

### Compiler / Runtime
- C++ compiler supporting C++11 or later:
  - `g++` (GCC)
  - `clang++`
  - MSVC (Visual Studio)

### Package Managers
- None required

### Additional Dependencies
- None (uses only the C++ Standard Library)

---

## 4. Installation, Compilation & Running the Program (Terminal Guide)

This section guides you from **zero setup** to a **running calculator program** using the terminal.

---

### 4.1 Verify Compiler Installation

Check whether a C++ compiler is installed:

```bash
g++ --version 
```

### 4.2 Install a Compiler(If not installed)
#### Windows
- Install MinGw or Visual Studio (C++ workload)
- Ensure g++ is added to the system PATH
- On Ubuntu linux:
```bash
sudo apt update
sudo apt install g++
```

### 4.3 Create the Source file
- Create a new file called index.cpp and open it in an editor eg using VS Code:
```bash 
touch index.cpp 
code index.cpp
```
- Paste the program into this file and save

### 4.4 Compile the Program
- Compile the source file using the C++ compiler:
```bash
g++ index.cpp -o index
```
- Expected Result:
No Output indicates successful completion

### 4.5 Run the Program
macOS/Linux:
```bash
./index
```
Windows:
```bash
index.exe
```
### 4.6 Verification setup
When the program runs, you should be prompted to enter:
1. First number
2. Second number
3. Arithmetic operator (+, -, *, /)

If a result is displayed correctly, the setup is successful.

## 5. Minimal Working Example
### Purpose
This example demonstrates:
- User Input with ``cin``
- Decision-making using a ``switch`` statements
- Arithmetic operations and output using ``cout``

```bash
#include <iostream>   // Input and output operations
#include <string>     // Included but not required for this program

using namespace std;

int main(void) {
    char op;          // Stores arithmetic operator
    float num1;       // First input number
    float num2;       // Second input number
    float result;     // Stores calculation result

    cout << "Input number 1: ";
    cin >> num1;

    cout << "Input number 2: ";
    cin >> num2;

    cout << "Input the desired operator (+, -, *, /): ";
    cin >> op;

    switch (op) {
        case '+':
            result = num1 + num2;
            cout << "Result: " << result << endl;
            break;

        case '-':
            result = num1 - num2;
            cout << "Result: " << result << endl;
            break;

        case '*':
            result = num1 * num2;
            cout << "Result: " << result << endl;
            break;

        case '/':
            result = num1 / num2;
            cout << "Result: " << result << endl;
            break;

        default:
            cout << "Enter a valid operator !!" << endl;
            break;
    }

    return 0;
}
```
### Sample Output
```bash
Input number 1: 10
Input number 2: 5
Input the desired operator (+, -, *, /): *
Result: 50
```
## 6 AI agents utilized:
- ChatGPT
- DeepSeek
- Mistral Le Chat
- Claude