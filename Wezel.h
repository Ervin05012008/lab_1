#ifndef NODE_H
#define NODE_H

#include "Material.h"

struct Node {
    struct Material* material;
    struct Node* next;
    struct Node* prev;
};

struct Node* create_node(struct Material* mat);
void free_node(struct Node* node);

#endif
