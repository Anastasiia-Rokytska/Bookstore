#ifndef CONTAINER_H
#define CONTAINER_H

#include "Hypodermic/Hypodermic.h"

class Container
{

    std::shared_ptr< Hypodermic::Container > m_container;

public:

    Container();
    std::shared_ptr< Hypodermic::Container > returner();

};

#endif // CONTAINER_H
