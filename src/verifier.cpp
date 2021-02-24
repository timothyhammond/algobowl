//
// Created by JustinDesktop on 2/17/2021.
//

#include "verifier.h"

verifer::verifier(std::string filename){
    this.filename = filename;
}

void verifier::readFile() {
    std::ifstream output;
    output.open(this.filename);
    int counter = 0;
    int x;
    pair<int,int> item;
    vector<pair<int,int>> items;
    while (file >> x) {
        if(counter == 0){
            knapsackWgt = x;
        }
        else if (counter == 1){
            numItems = x;
        }
        else if(counter % 2 == 0){
            item.first = x;
        }
        else{
            item.second = x;
            items.push_back(item);
        }
        counter++;
    }
}