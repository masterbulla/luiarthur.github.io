#pragma once

#include <iostream>
#include <tuple>

// p.254 (List), p.459 (Tree)
struct mondrianNode {

  // Data Fields
  std::tuple<int,double,double> dxt; // split dimension, location, time
  mondrianNode *left;
  mondrianNode *right;
  mondrianNode *parent;

  // Constructor
  mondrianNode(const std::tuple<int,double,double>& dat, 
               mondrianNode* left_val=NULL,
               mondrianNode* right_val=NULL,
               mondrianNode* parent_val=NULL) :
    dxt(dat), left(left_val), right(right_val), parent(parent_val) {}
  
  // Destructor (to avoid warning message). Does nothing.
  //virtual ~mondrianNode() {}
};
