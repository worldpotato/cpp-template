#include <string>

/**
 * This is a class to print strings to the console.
 */
class printer {
    private:
        std::string print_output;

    public:
    /**
     * @brief The default constructor which just creates an object of this class.
     */
    printer();

    /**
     * @brief The constructor to create a printer object with a defined string which should be printed.
     * @param[in] input is the string which should be printed
     */
    printer(std::string input);

    /**
     * @brief Prints the string which need to be defined before.
     * @return 0 when the predefined string is printed
     * @return 1 when there is no predifined string
     */
    int print();

    /**
     * @brief Prints the given string.
     * @param[in] input is the string which should be printed
     * @return 0 when everything is fine
     */
    int print(std::string input);

};
