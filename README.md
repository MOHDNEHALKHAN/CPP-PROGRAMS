# Fork and Clone the Repository

1. Go to the GitHub repository you want to fork.
2. Click the "Fork" button in the upper right-hand corner of the repository page.
3. Select your username or organization where you want to fork the repository. This creates a copy of the repository in your GitHub account.
4. Open your terminal (Command Prompt on Windows, Terminal on macOS and Linux).
5. Use this in your terminal
   ```sh
    git clone https://github.com/<your-username>/<repository-name>.git
    ```

# Running C++ Programs in Visual Studio Code

This README provides a step-by-step guide on how to execute and run C++ programs within Visual Studio Code using the "C++-program" repository.

## Prerequisites

Before you begin, make sure you have the following installed:

1. **Visual Studio Code**: If you haven't already, download and install Visual Studio Code from the [official website](https://code.visualstudio.com/).

2. **C/C++ Extension**: Install the "C/C++" extension for Visual Studio Code. Open VS Code, go to the Extensions view by clicking on the square icon in the sidebar or pressing `Ctrl+Shift+X`, and search for "C/C++". Install the one provided by Microsoft.

3. **C++ Compiler**: You need a C++ compiler to build and run your C++ programs. If you don't have it installed, you can follow instructions here: [Install a C++ Compiler on Windows, macOS, and Linux](https://www3.ntu.edu.sg/home/ehchua/programming/cpp/gcc_make.html).

## Getting Started

1. **Clone the Repository**: Start by cloning the "C++-program" repository to your local machine using either the HTTPS or SSH link provided on the repository page.

    ```sh
    git clone <repository_url>
    ```

2. **Open the Repository in VS Code**: Open Visual Studio Code, and from the menu, select `File > Open Folder...` Navigate to the directory where you cloned the repository and select the folder.

3. **Create or Open a C++ File**: Inside the repository folder, you can either create a new C++ file (e.g., `my_program.cpp`) or open an existing one.

4. **Write Your C++ Code**: Write your C++ program in the opened file. For example:

    ```cpp
    #include <iostream>

    int main() {
        std::cout << "Hello, World!" << std::endl;
        return 0;
    }
    ```

## Compiling and Running

1. **Compile the C++ Program**: Open a terminal in Visual Studio Code by going to `Terminal > New Terminal`. In the terminal, navigate to the directory containing your C++ file and use the following command to compile it:

    ```sh
    g++ my_program.cpp -o my_program
    ```

2. **Run the Executable**: After successful compilation, run your program by typing the following command in the terminal:

    ```sh
    ./my_program
    ```

    You should see the output of your program in the terminal.

## Debugging (Optional)

Visual Studio Code also supports debugging C++ programs. To set breakpoints, inspect variables, and step through your code, follow these steps:

1. Set a breakpoint by clicking in the gutter next to the line numbers.

2. Press `F5` or go to `Run > Start Debugging` to launch the debugger.

3. Use the debugging controls in the top menu bar to step through your code and inspect variables.

## Conclusion

You have successfully set up and run C++ programs in Visual Studio Code using the "C++-program" repository. Feel free to explore more advanced features and optimize your development process as you become more familiar with both C++ programming and Visual Studio Code.

Happy coding!
