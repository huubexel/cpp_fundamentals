#include "../main.ih"

string const inputToString()
{
    string line, allLines;        // Initiate variables to save output in
    while (getline(cin, line))    // Read from stdin till user presses ctrl d
        allLines += line + '\n';  // Add typed line to allLines
    return allLines;              // Return all the lines (allLines) that
}                                 // the user has typed
