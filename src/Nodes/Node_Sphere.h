#pragma once

#include "Node.h"

class Node_Sphere : public ShapeNode {
public:
	Node_Sphere();
	bool is_terminal() override;
	std::string function_body() override;
};