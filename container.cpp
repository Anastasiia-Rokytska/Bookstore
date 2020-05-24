#include "container.h"
#include "Hypodermic/Hypodermic.h"
#include "books.h"

Container::Container()
{
    Hypodermic::ContainerBuilder builder;

    builder.registerType< The_Bun >().as< Book >();
    builder.registerType< Red_Hood >().as< Book >();
    builder.registerType< White_snow >().as< Book >();
    builder.registerType< Math_Book >().as< Book >();
    builder.registerType< History_of_Time >().as< Book >();
    builder.registerType< Physics_Impossible >().as< Book >();
    builder.registerType< Sherlock_Holmes >().as< Book >();
    builder.registerType< Fault_Stars >().as< Book >();
    builder.registerType< Harry_Potter >().as< Book >();


    m_container = builder.build();
}

std::shared_ptr< Hypodermic::Container > Container::returner(){
    return m_container;
}
