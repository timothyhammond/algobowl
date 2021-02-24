//
// Created by JustinDesktop on 2/17/2021.
//
#include <vector>
#include <utility>
#include <iostream>
#include <fstream>
#include <string>

#ifndef ALGOBOWL_VERIFIER_H
#define ALGOBOWL_VERIFIER_H

class verifier {
    private:
        std::string filename;
        std::vector<int> covered;
        std::vector<std::pair<int,int>> output;

    public:
        verifier::verifier(string filename);
        void readFile();
        bool verifyFile();
};


#endif //ALGOBOWL_VERIFIER_H
