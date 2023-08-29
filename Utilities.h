// Name: Gagandeep Singh Sidhu	
// Seneca Student ID: 157393216
// Seneca email: gsidhu28@myseneca.ca
// Date of completion: 2023-08-04
// project milestone 3
// I confirm that I am the only author of this file
//   and the content was created entirely by me.
#ifndef SDDS_UTILITIES_H
#define SDDS_UTILITIES_H

#include <string>
#include <stdexcept>

using namespace std;

namespace sdds {
    class Utilities {
        size_t m_widthField = 1;
        static char m_delimiter;

    public:
        void setFieldWidth(size_t newWidth);
        size_t getFieldWidth() const;
        string extractToken(const string& str, size_t& next_pos, bool& more);
        static void setDelimiter(char newDelimiter) {
            m_delimiter = newDelimiter;
        }
        static char getDelimiter() {
            return m_delimiter;
        }
    };
};

#endif