///////////////////////////////////////////////////////////
//  IntProperty.cpp
//  Implementation of the Class IntProperty
//  Created on:      11-mars-2023 10:47:26
//  Original author: franc
///////////////////////////////////////////////////////////

#include "IntProperty.h"

IntProperty::IntProperty(std::string name, int i)
	: BaseProperty(name), m_value(i)
{
}

IntProperty* IntProperty::clone() const
{
	// a completer: alloue un nouvel objet identique a this et retourne le pointeur
	return new IntProperty(m_name, m_value);
}

std::string IntProperty::getValueAsString() const
{
	// a completer
	return std::to_string(m_value);
}

std::ostream& IntProperty::printToStream(std::ostream& o) const
{
	// a completer
	return o;
}