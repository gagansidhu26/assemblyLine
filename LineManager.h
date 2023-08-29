// Name: Gagandeep Singh Sidhu	
// Seneca Student ID: 157393216
// Seneca email: gsidhu28@myseneca.ca
// Date of completion: 2023-08-04
// project milestone 3
// I confirm that I am the only author of this file
//   and the content was created entirely by me.
#ifndef SDDS_LINE_MANAGER_H
#define SDDS_LINE_MANAGER_H

#include <string>
#include <vector>
#include <iostream>
#include "Workstation.h"

using namespace std;

namespace sdds {
    class LineManager {
        vector<Workstation*> m_activeLine;
        size_t m_cntCustomerOrder;
        Workstation* m_firstStation;

    public:
        LineManager(const string& file, const vector<Workstation*>& stations);
        void reorderStations();
        bool run(ostream& os);
        void display(ostream& os) const;
    };
};

#endif