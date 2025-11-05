#include <iostream>  // Required for console input/output (std::cout, std::cerr, std::endl)
#include <fstream>   // Essential for file stream operations (std::ofstream, std::ifstream)
#include <string>    // Needed for using std::string objects and std::getline

// Using the standard namespace to avoid prefixing std:: (e.g., instead of std::cout, just use cout)
using namespace std;

/**
 * @brief Main function demonstrating basic file writing and reading.
 *
 * This program first writes two lines of text to a file named "write.txt"
 * using an `ofstream`. After writing, it closes the output stream.
 *
 * Then, it opens the *same* file for reading using an `ifstream` and
 * prints its content to the console, line by line.
 * Error checking is included for both file operations.
 */
int main()
{
    // Define a string variable to hold data that will be written to the file.
    string name = "Gulfam Hashmi";

    // --- Part 1: Writing to the File (ofstream) ---

    // 1. Open the file for writing.
    // An `ofstream` object is used for output operations (writing to a file).
    // If "write.txt" doesn't exist, it will be created. If it *does* exist,
    // its current content will be completely erased (truncated) by default.
    ofstream outFile("write.txt"); // Creates an ofstream object named 'outFile' and attempts to open "write.txt".

    // 2. Check if the file was opened successfully for writing.
    // `is_open()` returns `true` if the file stream is ready for use, `false` otherwise.
    if (outFile.is_open()) // This condition checks if the file was successfully opened for writing.
    {
        // 3. Write data to the file.
        // The `<<` operator works just like with `cout` to write data to the file.
        outFile << "File is open\n"; // Writes the literal string "File is open" followed by a newline character.
        outFile << name;            // Writes the content of the 'name' string ("Gulfam Hashmi").
                                    // Note: There's no newline after 'name' here, so the next line in the file
                                    // will effectively start immediately after "Hashmi".
        cout << "Successfully wrote data to write.txt" << endl; // Console feedback.
    }
    else // This block executes if `outFile.is_open()` was false.
    {
        // If the file couldn't be opened for writing (e.g., due to permissions, invalid path),
        // print an error message to the standard error stream (`cerr`).
        cerr << "Error: Unable to open write.txt for writing!" << endl;
        // In a real application, you might `return 1;` here to indicate an error to the operating system.
    }

    // 4. Close the output file stream.
    // It's crucial to explicitly close the file stream after you're done writing.
    // This ensures all buffered data is written to the disk and the file handle is released.
    // This step is particularly important *before* you try to read from the same file.
    outFile.close();

    // --- Part 2: Reading from the File (ifstream) ---

    // 5. Open the file for reading.
    // An `ifstream` object is used for input operations (reading from a file).
    // This will attempt to open the *existing* "write.txt" file.
    // If the file does not exist, this operation will fail.
    ifstream inFile("write.txt"); // Creates an ifstream object named 'inFile' and attempts to open "write.txt".

    // 6. Check if the file was opened successfully for reading.
    // **Correction here:** You want to read *if* the file is open, so use `if (inFile.is_open())`.
    if (inFile.is_open()) // This condition checks if the file was successfully opened for reading.
    {
        string line; // Declare a string variable to store each line read from the file.

        // 7. Read and print the first line.
        // `getline(stream, string_variable)` reads an entire line from the stream
        // (including spaces) until it encounters a newline character or the end of the file.
        getline(inFile, line);
        cout << "Read from file (Line 1): " << line << endl; // Output the first line to the console.

        // 8. Read and print the second line.
        // The file pointer automatically advances after each read operation.
        // This `getline` call will read from where the previous one left off.
        // Based on our writing, this will read "Gulfam Hashmi".
        getline(inFile, line);
        cout << "Read from file (Line 2): " << line << endl; // Output the second line to the console.

        // 9. Close the input file stream.
        // Always close the input stream when you're finished reading to release resources.
        inFile.close();
    }
    else // This block executes if `inFile.is_open()` was false.
    {
        // If the file couldn't be opened for reading (e.g., it doesn't exist, or permissions issue),
        // print an error message.
        cerr << "Error: Unable to open write.txt for reading!" << endl;
    }

    return 0; // Indicate that the program executed successfully.
}